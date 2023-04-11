#ifndef STATUS_H_
#define STATUS_H_

namespace cartographer {
namespace io {

enum SlamState
{
  SLAM_STATE_STANDBY,
  SLAM_STATE_LOCATING,
  SLAM_STATE_LOCATE_SUCCEED,
  SLAM_STATE_LOCATE_WEAK,
  SLAM_STATE_MAPPING,
  SLAM_STATE_RELOCATING,
};

extern SlamState slam_state;
extern int invalid_node_count;

}  // namespace io
}  // namespace cartographer

#endif