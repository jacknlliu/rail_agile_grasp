#ifndef POSE_WITH_HEURISTIC_H_
#define POSE_WITH_HEURISTIC_H_

// ROS
#include <geometry_msgs/Pose.h>

class PoseWithHeuristic
{
public:
  geometry_msgs::Pose pose;
  double h;

  PoseWithHeuristic(geometry_msgs::Pose pose, double h);

  bool operator < (const PoseWithHeuristic obj) const;
};

#endif
