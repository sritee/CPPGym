
#include <string>
#include <iostream>

#include "gym/envs/ContinuousMountainCar.h"
#include "gym/spaces/discrete.h"

using std::max;
using std::min;
using std::cout;
using std::get;
using namespace cppgym;

ContinuousMountainCar::ContinuousMountainCar(){}

VectorXf ContinuousMountainCar::reset()
{
    state <<0,0;
    cout<<"Continuous Mountain Car initialized";
    return state;
}


VectorXf ContinuousMountainCar::get_state()
{

    return state;
}


std::tuple<VectorXf, float, bool, std::string> ContinuousMountainCar::step(const gym_action& action)
{

    assert(action.index()==1 && "Invalid action type, you need to pass a float eigen matrix");
    float x_velocity = state(0);
    float x_pos = state(1);

    float force = get<Eigen::VectorXf>(action)(0); //just need to get the element

    x_velocity = x_velocity + force*power - 0.0025 * cos(3*x_pos);

    x_velocity= max(-max_speed,min(max_speed,x_velocity)); //clip between min and max
    x_pos=x_pos + x_velocity;

    x_pos= max(min_position,min(max_position,x_pos));

    if(x_pos== min_position && x_velocity<=0)
        x_velocity=0;

    bool done= (x_pos>=goal_position);

    float reward = -1;
    if (done) reward = 100.0; //consistent with openi gym

    reward-= 0.1*pow(force,2);

    state(0) = x_pos;
    state(1) = x_velocity;
    std::string info = "";

    return make_tuple(state, reward, done, info);
}
