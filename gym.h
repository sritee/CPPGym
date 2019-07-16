#pragma once

#include <core.h>
#include <string>
#include <unordered_map>

#include "env_list.h"

typedef Env* (*FunctionFunc)();

using registry = std::unordered_map<std::string, FunctionFunc>;

class gym

{
   public:

    static Env* make(const std::string);

    private:

    static registry environment_list;

};

