#ifndef __WAVE_KINEMATICS_TWOWHEEL_HPP__
#define __WAVE_KINEMATICS_TWOWHEEL_HPP__

#include <float.h>
#include <iostream>

#include "wave/utils/utils.hpp"


namespace wave {
namespace twowheel {

class TwoWheelRobotModel {
public:
  bool initialized;
  Vec3 x;

  TwoWheelRobotModel(void);
  VecX gFunc(Vec3 x, Vec2 u, float dt);
  MatX GFunc(Vec3 x, Vec2 u, float dt);
  VecX hFunc(VecX x);
  MatX HFunc(VecX y);
};

}  // end of twowheel namespace
}  // end of wave namespace
#endif
