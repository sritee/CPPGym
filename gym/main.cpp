
#include <Eigen/Core>
#include <iostream>
#include <string>
#include <tuple>

#include "gym/gym.h"
#include "gym/spaces/box.h"
#include "gym/spaces/discrete.h"


using namespace std;
using namespace cppgym;

int main()
{

      auto env = gym::make("MountainCar1");

      env->reset();

      env->step(1);
      env->step(2);

      return 0;

}
