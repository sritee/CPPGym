
#pragma once

#include <Eigen/Core>
#include "core.h" //gym base environment

using Eigen::VectorXf;
using Eigen::Vector2f;

class MountainCar : Env

{

	protected:

		float min_position;
		float max_position;
		float max_speed;
		float goal_position;

	public:

		MountainCar();
		VectorXf get_state();

		VectorXf reset();
        std::tuple<VectorXf,float,bool,std::string> step(const int action);

		Vector2f low;
		Vector2f high;

		Vector2f state;

		int num_actions;


};















































