#pragma once

#include <Eigen/Core>
#include <iostream>

#include "gym/spaces/space.h"

namespace cppgym
{
    class Discrete : public Space<int>
    {
        public:

        int n;

        Discrete(int num_values);

        int sample() const override;

    };
}
