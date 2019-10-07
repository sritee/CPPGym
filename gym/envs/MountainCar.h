
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

            const float min_position = -1.2;
            const float max_position = 0.5;
            const float max_speed = 0.07;
            const float goal_position = 0.5;

        public:

            MountainCar();
            VectorXf get_state();

            VectorXf reset() override;
            std::tuple<VectorXf, float, bool, std::string> step(const gym_action& action) override;

//            Discrete action_space;
//            Box observation_space;
        private:
            Vector2f state;
    };
}
