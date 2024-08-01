#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/header.hpp"
#include "std_msgs/msg/string.hpp"
#include <chrono>
#include <iostream>

using namespace std;
using namespace std::chrono_literals;

class Mtsub : public rclcpp::Node
{
public:
    Mtsub() : Node("mtsub")
    {
        auto qos_profile = rclcpp::QoS(rclcpp::KeepLast(10));
        _sub = this->create_subscription<std_msgs::msg::String>("message1", qos_profile, std::bind(&Mtsub::sub_helloworld_msg, this, std::placeholders::_1));
        _sub2 = this->create_subscription<std_msgs::msg::Header>("time", qos_profile, std::bind(&Mtsub::sub_time_msg, this, std::placeholders::_1));
    }

private:
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr _sub;
    rclcpp::Subscription<std_msgs::msg::Header>::SharedPtr _sub2;
    void sub_helloworld_msg(const std_msgs::msg::String::SharedPtr msg)
    {
        RCLCPP_INFO(get_logger(), "I heard: '%s'", msg->data.c_str());
    }
    void sub_time_msg(const std_msgs::msg::Header::SharedPtr msg)
    {
        RCLCPP_INFO(get_logger(), "I heard: '%d.%d'", msg->stamp.sec, msg->stamp.nanosec);
    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Mtsub>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}