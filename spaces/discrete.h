#pragma once

#include "spaces/space.h"
#include <Eigen/Core>
#include <iostream>

class Discrete : public Space<int>
{
    public:

    int n;

    Discrete(int num_values);

    int sample() const override;

};
