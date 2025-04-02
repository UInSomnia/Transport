#include "bicycle.h"

namespace InSomnia
{
    Bicycle::Bicycle()
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

    }
}
