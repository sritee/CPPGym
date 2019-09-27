#pragma once

#include <tuple>
#include <stdexcept>
#include <Eigen/Core>
#include <string>
#include "exceptions.h"
#include "spaces/space.h"

class Env

{
	public:

        //returns state, reward, done, info. Overloading all possible action types.
        virtual std::tuple<Eigen::VectorXf,float,bool,std::string> step(const int) {throw gym_exception::NotImplementedError();}
        virtual std::tuple<Eigen::VectorXf,float,bool,std::string> step(const Eigen::VectorXf) {throw gym_exception::NotImplementedError();}

        //resets the environment
		virtual Eigen::VectorXf reset()=0;

        virtual void render(){throw gym_exception::NotImplementedError();} //if called without implementation

        virtual ~Env(){} //virtual destructor to delete through base pointer



        //virtual void close()=0;

};


template<class U>
class Env_Helper : public Env
{

    public:

    virtual std::tuple<Eigen::VectorXf,float,bool,std::string> step(const U) = 0;

};
