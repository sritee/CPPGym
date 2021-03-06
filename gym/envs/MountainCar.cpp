
#include <string>
#include <iostream>

#include "gym/envs/MountainCar.h"
#include "gym/spaces/discrete.h"

using std::max;
using std::min;
using std::cout;
using std::get;
using namespace cppgym;

MountainCar::MountainCar() {}

VectorXf MountainCar::reset()
{
    state <<0,0;
    cout<<"Mountain Car initialized"<<std::endl;
    return state;
}

VectorXf MountainCar::get_state()
{
    return state;
}


std::tuple<VectorXf, float, bool, std::string> MountainCar::step(const gym_action& action)
{

    assert(action.index()==0 && "Invalid action type, you need to pass integer");
    float x_velocity = state(0);
    float x_pos = state(1);

    x_velocity+=cos(3*x_pos)*-0.0025;

    switch(get<int>(action))

    {
        case 0:

            break; //only gravity acts

        case 1:

            x_velocity+= 0.001;
            break;

        case 2:

            x_velocity+= -0.001;
            break;

        default:

            cout<<"Invalid Action Entered";

    }

        x_velocity= max(-max_speed,min(max_speed,x_velocity)); //clip between min and max
        x_pos=x_pos + x_velocity;

        x_pos= max(min_position,min(max_position,x_pos));


        if(x_pos== min_position && x_velocity<=0)
            x_velocity=0;


        bool done= (x_pos>=goal_position);

        int reward = -1;

        if(done==1) reward=1;

        state(0) = x_pos;
        state(1) = x_velocity;
        std::string info = "";

        return make_tuple(state, reward, done, info);
}
