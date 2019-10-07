# CPPGym

C++ OpenAI Gym

Currently, Using C++ with [OpenAI Gym](https://github.com/openai/gym) involve having a communication channel/wrapper with the Python source code. This open-source project aims at developing some of the core functionalities of OpenAI gym in C++.

This README will be continuously updated as new features are added, bugs are fixed, and other changes are made.

## Dependencies

- C++17 Supported Compiler (Tested with GCC 7.1) 
- [QMake](https://doc.qt.io/archives/3.3/qmake-manual-2.html) (Tested with QMake 3.0)
- [Eigen3](http://eigen.tuxfamily.org/index.php?title=Main_Page)

## Build (from Source)

```sh
git clone https://github.com/sritee/CPPGym
cd CPPGym
mkdir build
cd build
qmake ../CPPGym.pro
make -j8 (replace 8 with number of cores)

```
## Usage

To start off, you can refer to the code in gym/main.cpp after building from source. You can also build the project and link with yours.

```cpp
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
```

## In the Works!
- Tests and CI
- 2D Rendering Support
- Contributing Guidelines
- More Environments!
