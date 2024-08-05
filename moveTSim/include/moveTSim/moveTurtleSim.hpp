#ifndef MOVETURTLESIM_HPP
#define MOVETURTLESIM_HPP

#include <chrono>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

using namespace std;
using namespace std::chrono_literals;

class moveTurtleSim : public rclcpp::Node{
public:
    moveTurtleSim();

private:
        int _i;
        float execelaration;
        rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr _pub;
        rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr _pub2;
        rclcpp::TimerBase::SharedPtr _timer;
        void publish_moveTurtleSim_msg();

};

#endif