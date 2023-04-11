#include "cartographer/io/status.h"
namespace cartographer {
namespace io {
SlamState slam_state = SlamState::SLAM_STATE_STANDBY;
int invalid_node_count = 0;
}  // namespace io
}  // namespace cartographer