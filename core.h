#pragma once

#include <tuple>
#include <stdexcept>
#include <Eigen/Core>
#include <string>
#include "spaces/space.h"

class Env

{
	public:

        //returns state, reward, done, info. Overloading all possible types.
        virtual std::tuple<Eigen::VectorXf,float,bool,std::string> step(const int) {throw std::runtime_error("Not implemented, are you passing correct action type?");}
        virtual std::tuple<Eigen::VectorXf,float,bool,std::string> step(const Eigen::VectorXf) {throw std::runtime_error("Not implemented, are you passing correct action type?");}

        //resets the environment
		virtual Eigen::VectorXf reset()=0;

        virtual ~Env(){} //virtual destructor to delete through base pointer


        //TODO - Rendering
		//virtual void close()=0;
		//virtual void render()=0;

};


template<class U>
class Env_Helper : public Env
{

    public:

    virtual std::tuple<Eigen::VectorXf,float,bool,std::string> step(const U) = 0;

};
