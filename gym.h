#pragma once

#include <core.h>
#include <string>
#include <unordered_map>
#include <memory>

#include "env_list.h"

using registry = std::unordered_map<std::string,  std::unique_ptr<Env> (*)()>;

class gym

{
   public:

    static std::unique_ptr<Env> make(const std::string& env_name);

    private:

    static registry environment_list;

};

