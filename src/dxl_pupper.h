#ifndef DXLPUPPER_DXLPUPPER_H
#define DXLPUPPER_DXLPUPPER_H

#include <BasicLinearAlgebra.h>

#include "inverse_kinematics.h"
using namespace BLA;

class DXLPuppe {
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


 private:
  const BLA::Matrix<12> kServoIDs = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
};

#endif  // DXLPUPPER_DXLPUPPER_H