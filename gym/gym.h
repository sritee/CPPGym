#pragma once

#include <memory>
#include <string>
#include <unordered_map>


#include "gym/env_list.h"
#include "gym/core.h"

namespace cppgym
{
    using registry = std::unordered_map<std::string,  std::unique_ptr<Env> (*)()>;

    class gym

    {
       public:

        static std::unique_ptr<Env> make(const std::string& env_name);

        private:

        static registry environment_list;

    };
}

