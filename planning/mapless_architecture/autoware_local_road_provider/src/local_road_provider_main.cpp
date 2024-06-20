// Copyright 2024 driveblocks GmbH
// driveblocks proprietary license

#include "autoware/local_road_provider/local_road_provider_node.hpp"

#include <rclcpp/rclcpp.hpp>

#include <memory>

int main(int argc, char * argv[])
{
  RCLCPP_INFO(rclcpp::get_logger("local_road_provider"), "Launching Local Road Provider node...");

  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<autoware::mapless_architecture::LocalRoadProviderNode>());
  rclcpp::shutdown();
  return 0;
}
