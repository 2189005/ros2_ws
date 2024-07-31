#include "simple_pkg_cpp/time_subscriber.hpp"

TimeSubscriber::TimeSubscriber()
    : Node("hello_world")
{
    auto qos_profile = rclcpp::QoS(rclcpp::KeepLast(10));
    _sub = this->create_subscription<std_msgs::msg::Header>("topic_time", qos_profile, std::bind(&TimeSubscriber::sub_time_msg, this, std::placeholders::_1));
}

void TimeSubscriber::sub_time_msg(const std_msgs::msg::Header::SharedPtr msg){
    RCLCPP_INFO(get_logger(), "frame id: %s", msg -> frame_id.c_str());
    RCLCPP_INFO(get_logger(), "stamp: %ld.%ld", msg -> stamp.sec, msg -> stamp.nanosec);
}
