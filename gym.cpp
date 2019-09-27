#include "gym.h"
#include <iostream>
#include <stdexcept>

using namespace cppgym;
template<typename T>
std::unique_ptr<Env> createInstance() { return std::unique_ptr<Env>(new T);}

std::unique_ptr<Env> gym::make(const std::string& env_name)

{
     if(environment_list.count(env_name)>0)

     {
        return environment_list[env_name]();

     }

     else
     {
         throw std::runtime_error("Environment not found, please check envs_list for valid environments");
     }

}

registry gym::environment_list = {{"MountainCar1",&createInstance<MountainCar>}};
