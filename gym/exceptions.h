#pragma once

#include <exception>

namespace gym_exception
{
    class NotImplementedError : public std::logic_error
    {
    public:
        NotImplementedError() : std::logic_error("Function is not implemented") { }
    };
}

