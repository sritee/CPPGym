#include <Eigen/Core>
#include <string>
#include <tuple>

#include "gym/gym.h"

int main()
{
  Eigen::VectorXf state;
  float reward;
  bool done;
  std::string info;

  auto env = cppgym::gym::make("MountainCar1"); //env is a unique_ptr to a gym environment
  state = env->reset(); //call reset before simulating

  for(int i = 0; i < 10; ++i)
  {
    std::tie(state, reward, done, info) = env->step(0); //unpack tuple
  }
  return 0;
}
