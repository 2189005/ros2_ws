#include "simple_pkg_cpp/subscriber.hpp"

int main(){
    rclcpp::init(0, nullptr);

    auto node = std::make_shared<HellowSubscriber>();

    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
