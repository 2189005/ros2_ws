#include <iostream>
#include <chrono>
#include "rclcpp/rclcpp.hpp"

using namespace std;
using namespace std::chrono_literals;
void printHello();

int main(){
    rclcpp::init(0, nullptr);
    auto node = std::make_shared<rclcpp::Node>("hello_rclcpp");
    auto timer = node->create_wall_timer(1s, printHello);
    rclcpp::spin(node);
    rclcpp::shutdown();
    cout << "hello, world" << endl;
}

void printHello(){
    cout << "Hello, World!" << endl;
}