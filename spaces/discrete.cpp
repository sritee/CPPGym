#include "spaces/space.h"
#include <Eigen/Core>
#include <iostream>


class Discrete : Space<int>
{
    public:

    int n;

    Discrete(int num_values)
    {
        assert(num_values>0 && "positive number needed");
        n = num_values;
    }

    int sample() override
    {
        return 1;

    }


};
