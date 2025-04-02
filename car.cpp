#include "car.h"

namespace InSomnia
{
    Car::Car() :
        Vehicle()
    {
        
    }

    Car::Car(
        const std::string &model,
        const uint16_t count_wheels,
        const uint16_t count_seats,
        const std::optional<Motor> &motor) :
        Vehicle(model, count_wheels, count_seats, motor)
    {
        
    }

    void Car::start()
    {
        if (motor.has_value() == false)
        {
            return;
        }
        motor.value().set_active(true);
    }
}
