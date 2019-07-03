
#include "spaces/box.h"

Box::Box(int num_observations, float low = -1.0, float high = 1.0)

    {

        assert(high>low && "High must be greater than low");
        shape = num_observations;

        this->low.resize(shape);
        this->high.resize(shape);

        for(int i = 0; i < shape; i++)
        {
            this->low(i)=low;
            this->high(i)=high;
        }
    }

Box::Box(VectorXf low, VectorXf high)

{
    this->low.resize(shape);
    this->high.resize(shape);

    this->low << low;
    this->high << high;
}
