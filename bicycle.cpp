#include "bicycle.h"

namespace InSomnia
{
    Bicycle::Bicycle() :
        Vehicle()
    {
        
    }

    Bicycle::Bicycle(
        const std::string &model,
        const uint16_t count_wheels,
        const uint16_t count_seats) :
        Vehicle(model, count_wheels, count_seats, std::nullopt)
    {
        
    }

    void Bicycle::start()
    {
        throw std::runtime_error(
            "The bike does not have an engine. It is impossible to start the engine of the bike!");
    }
}
