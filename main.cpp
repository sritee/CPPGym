
#include "spaces/box.h"
#include "spaces/discrete.h"

#include <iostream>
#include <string>
#include <tuple>
#include <Eigen/Core>
#include "gym.h"


using namespace std;

int main()
{
    //MountainCar b;

    //b.reset();

//    Discrete disc(5);
//    Box box(2,3,7);
//    cout<<box.get_upper_bound()<<endl;
//    cout<<disc.sample()<<endl;

      Env* env = gym::make("Mo");

      env->reset();

      env->step(1);

      return 0;

}
