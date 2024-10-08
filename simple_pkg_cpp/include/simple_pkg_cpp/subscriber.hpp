#ifndef PUBILSHER_HPP
#define PUBLISHER_HPP

#include <iostream>
#include <chrono>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std;
using namespace std::chrono_literals;

class HellowSubscriber : public rclcpp::Node{
public:
    HellowSubscriber();

private:
        rclcpp::Subscription<std_msgs::msg::String>::SharedPtr _sub;
        void sub_helloworld_msg(const std_msgs::msg::String::SharedPtr msg);

};

#endif