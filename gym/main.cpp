
#include <Eigen/Core>
#include <iostream>
#include <string>
#include <tuple>

#include "gym/gym.h"
#include "gym/spaces/box.h"
#include "gym/spaces/discrete.h"


using namespace std;
using cppgym::gym;

int main()
{
    //MountainCar b;

    //b.reset();

//    Discrete disc(5);
//    Box box(2,3,7);
//    cout<<box.get_upper_bound()<<endl;
//    cout<<disc.sample()<<endl;

      auto env = gym::make("MountainCar1");

      env->reset();

      env->step(1);
      env->step(2);
      //env->render();

      return 0;

}
