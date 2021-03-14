#ifndef DXLPUPPER_DXLPUPPER_H
#define DXLPUPPER_DXLPUPPER_H

#include <BasicLinearAlgebra.h>

#include "inverse_kinematics.h"
using namespace BLA;

struct PupperGeometry
{
  float hip_x;
  float hip_y;
  float upper_link_length;
  float lower_link_length;
};

class DXLPupper {
  //  public:
  //   int CountFooErrors(const std::vector<Foo>& foos) {
  //     int n = 0;  // Clear meaning given limited scope and context
  //     for (const auto& foo : foos) {
  //       ...
  //       ++n;
  //     }
  //     return n;
  //   }
  //   void DoSomethingImportant() {
  //     std::string fqdn = ...;  // Well-known abbreviation for Fully Qualified
  //     Domain Name
  //   }
  //  private:
  //   const int kMaxAllowedConnections = ...;  // Clear meaning within context
 public:
  DXLPupper();
  void SetVelocity(BLA::Matrix<3> velocity);
  void SetHeight(float height);
  void SetClearance(float clearance);
  void SetPitch(float pitch);
  void SetRoll(float roll);

 private:
  const BLA::Matrix<12> kServoIDs = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  const PupperGeometry kGeometry {0.08, 0.04, 0.05, 0.05}; // [m]
};

#endif  // DXLPUPPER_DXLPUPPER_H