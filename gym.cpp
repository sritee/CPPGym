#include "gym.h"
#include <iostream>
#include <stdexcept>

template<typename T> Env* createInstance() { return new T;}

Env* gym::make(const std::string env_name)

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

registry gym::environment_list = {{"Mo",&createInstance<MountainCar>}};
