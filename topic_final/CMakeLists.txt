cmake_minimum_required(VERSION 3.8)
project(topic_final)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

# add executable
add_executable(mpub src/mpub.cpp)
ament_target_dependencies(mpub rclcpp std_msgs)

add_executable(msub src/msub.cpp)
ament_target_dependencies(msub rclcpp std_msgs)

add_executable(msub2 src/msub2.cpp)
ament_target_dependencies(msub2 rclcpp std_msgs)

add_executable(tpub src/tpub.cpp)
ament_target_dependencies(tpub rclcpp std_msgs)

add_executable(mtsub src/mtsub.cpp)
ament_target_dependencies(mtsub rclcpp std_msgs)

#install
install(TARGETS
  mpub
  msub
  msub2
  tpub
  mtsub
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()