#include "gym/spaces/discrete.h"

using namespace cppgym;
Discrete::Discrete(int num_values)
{
    assert(num_values>0 && "positive number needed for argument");
    n = num_values;
}

int Discrete::sample() const //TODO - Fix Sampling
{
    return 2;

}

