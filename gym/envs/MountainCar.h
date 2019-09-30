
#pragma once

#include <Eigen/Core>
#include "gym/core.h" //gym base environment

using Eigen::VectorXf;
using Eigen::Vector2f;

namespace cppgym
{
    class MountainCar : public Env
    {

        protected:

            float min_position;
            float max_position;
            float max_speed;
            float goal_position;

        public:

            MountainCar();
            VectorXf get_state();

            VectorXf reset() override;
            std::tuple<VectorXf, float, bool, std::string> step(const gym_action& action) override;

            Vector2f state;

    //        Discrete action_space;
    //        Box observation_space;


    };
}















































