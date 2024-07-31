#include "simple_pkg_cpp/time_subscriber.hpp"

int main(){
    rclcpp::init(0, nullptr);

    auto node = std::make_shared<TimeSubscriber>();

    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
