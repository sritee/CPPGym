#pragma once

#include <tuple>
#include <Eigen/Core>
#include <string>
#include "spaces/space.h"

template <class U> //template to accomodate different action spaces
class Env

{
	public:

        //returns state, reward, done, info
        virtual std::tuple<Eigen::VectorXf,float,bool,std::string> step(const U)=0;

        //resets the environment
		virtual Eigen::VectorXf reset()=0;


        //TODO - Rendering
		//virtual void close()=0;
		//virtual void render()=0;

};
