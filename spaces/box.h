#pragma once

#include "spaces/space.h"
#include <Eigen/Core>
#include <iostream>


using Eigen::VectorXf;


class Box : Space<VectorXf>

{

    public:

    VectorXf low; //TODO - Make them const
    VectorXf high; //have seperate functions to call in initializer list

//    There are two common use cases:

//    * Identical bound for each dimension::
//      >>> Box(num_observations, low_val=-1.0, high_val=2.0)

//      * Independent bound for each dimension::
//       >>> Box(low=[-1.0, -2.0], high=[2.0, 4.0])

    Box(int, float, float);

    Box(VectorXf, VectorXf);

   //TODO - SEEDING

   //TODO - Sampling
};
