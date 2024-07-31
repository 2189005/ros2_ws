#include "simple_pkg_cpp/publisher.hpp"

int main(){
    rclcpp::init(0, nullptr);

    auto node = std::make_shared<HellowPublisher>();

    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
