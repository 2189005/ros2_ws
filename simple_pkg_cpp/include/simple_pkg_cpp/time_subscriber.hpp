#ifndef TIME_SUBSCRIBER_HPP
#define TIME_SUBSCRIBER_HPP

#include <iostream>
#include <chrono>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/header.hpp"

using namespace std;
using namespace std::chrono_literals;

class TimeSubscriber : public rclcpp::Node{
public:
    TimeSubscriber();

private:
        int _i;
        rclcpp::Subscription<std_msgs::msg::Header>::SharedPtr _sub;
        void sub_time_msg(const std_msgs::msg::Header::SharedPtr msg);

};

#endif