#pragma once

#include <Eigen/Core>

using Eigen::VectorXf;


namespace cppgym
{
    //abstract shape class
    template <class U>
    class Space
    {

        public:

        int shape;

        virtual U sample() const =0;

    };
}
