#include "spaces/discrete.h"


Discrete::Discrete(int num_values)
{
    assert(num_values>0 && "positive number needed for argument");
    n = num_values;
}

int Discrete::sample() const
{
    return 2;

}

