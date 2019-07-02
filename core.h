#pragma once

#include <tuple>
#include <Eigen/Core>
#include <string>

class Env

{

	public:

		virtual std::tuple<Eigen::VectorXf,float,bool,std::string> step(const int)=0;
		//returns state, reward, done, info

		virtual Eigen::VectorXf reset()=0;
		//returns state

		//virtual void close()=0;
		//virtual void render()=0;

};
