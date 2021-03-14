#ifndef DXLPUPPER_INVERSEKINEMATICS_H
#define DXLPUPPER_INVERSEKINEMATICS_H

#include <BasicLinearAlgebra.h>
#include "utils.h"

BLA::Matrix<3> LegIK(BLA::Matrix<3> q);
BLA::Matrix<3, 4> RobotIK(BLA::Matrix<3, 4> q);

#endif //DXLPUPPER_INVERSEKINEMATICS_H