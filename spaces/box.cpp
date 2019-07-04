
#include "spaces/box.h"

Box::Box(int num_observations, float lower_bound = -1.0, float higher_bound = 1.0)

    {

        //assert(high>low && "High must be greater than low");
        shape = num_observations;

        low.resize(shape);
        high.resize(shape);

        for(int i = 0; i < shape; i++)
        {
            low(i)=lower_bound;
            high(i)=higher_bound;
        }
    }

Box::Box(VectorXf lower_bound, VectorXf higher_bound)

{
    low.resize(shape);
    high.resize(shape);

    low << lower_bound;
    high << higher_bound;
}


VectorXf Box::get_lower_bound() const {return low;}
VectorXf Box::get_upper_bound() const {return high;}

VectorXf Box::sample() const {VectorXf a; a.resize(shape); return a;}
