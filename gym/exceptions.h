#pragma once

#include <exception>

namespace gym_exception
{
    class NotImplementedError : public std::logic_error
    {
    public:
        NotImplementedError() : std::logic_error("Function is not implemented") { }
    };

    class InvalidAction : public std::logic_error
    {
        public:

            InvalidAction() : std::logic_error("The Action is out of bounds for this environment") { }
    };
}

