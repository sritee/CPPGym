

#include "spaces/space.h"
#include <Eigen/Core>
#include <iostream>


using Eigen::VectorXf;


class Box : Space

{

    public:

    VectorXf low; //TODO - Make them const
    VectorXf high; //have seperate functions to call in initializer list

//    There are two common use cases:

//        * Identical bound for each dimension::
//            >>> Box(num_observations, low_val=-1.0, high_val=2.0)

//        * Independent bound for each dimension::
//            >>> Box(low=[-1.0, -2.0], high=[2.0, 4.0])

    Box(int num_observations, float low = -1.0, float high = 1.0)

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

   Box(VectorXf low, VectorXf high)

   {
        this->low.resize(shape);
        this->high.resize(shape);

        this->low << low;
        this->high << high;
   }

   //TODO - SEEDING

   VectorXf sample() override
   {





   }
};
