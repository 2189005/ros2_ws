#include "topic_final_mine/msub.hpp"

HellowSubscriber::HellowSubscriber()
    : Node("hello_world")
{
    auto qos_profile = rclcpp::QoS(rclcpp::KeepLast(10));
    _sub = this->create_subscription<std_msgs::msg::String>("helloworld", qos_profile, std::bind(&HellowSubscriber::sub_helloworld_msg, this, std::placeholders::_1));
}

void HellowSubscriber::sub_helloworld_msg(const std_msgs::msg::String::SharedPtr msg){
    RCLCPP_INFO(get_logger(), "m2sub:  '%s;'", msg->data.c_str());
}
