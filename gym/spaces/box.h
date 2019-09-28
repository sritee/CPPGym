#pragma once

#include <Eigen/Core>
#include <iostream>

#include "gym/spaces/space.h"

using Eigen::VectorXf;


namespace cppgym
{
class Box : public Space<VectorXf>

    {

        public:


    //    There are two common use cases:

    //    * Identical bound for each dimension::
    //      >>> Box(num_observations, low_val=-1.0, high_val=2.0)

    //      * Independent bound for each dimension::
    //       >>> Box(low=[-1.0, -2.0], high=[2.0, 4.0])

        Box(int, float, float);

        Box(VectorXf, VectorXf);

        VectorXf get_lower_bound() const; //gets lower bound of space

        VectorXf get_upper_bound() const; //gets upper bound of space

        VectorXf sample() const override;

       //TODO - SEEDING

       //TODO - Sampling

        protected:

        VectorXf low; //TODO - Make them const
        VectorXf high; //have seperate functions to call in initializer list
    };
}
