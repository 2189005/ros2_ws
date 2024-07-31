#include "simple_pkg_cpp/time_pub.hpp"

int main(){
    rclcpp::init(0, nullptr);

    auto node = std::make_shared<TimePublisher>();

    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
