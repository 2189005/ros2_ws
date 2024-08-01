#include "moveTSim/moveTurtleSim.hpp"

int main(){
    rclcpp::init(0, nullptr);

    auto node = std::make_shared<moveTurtleSim>();

    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
