#include "vehicle.h"

namespace InSomnia
{
    Vehicle::Vehicle()
    {
        count_wheels = -1;
        count_seats = -1;
    }

    Vehicle::Vehicle(
        const std::string &model,
        const uint16_t count_wheels,
        const uint16_t count_seats,
        const std::optional<Motor> &motor)
    {
        this->model = model;
        this->count_wheels = count_wheels;
        this->count_seats = count_seats;
        this->motor = motor;
    }

    std::string Vehicle::print(const uint16_t offset) const
    {
        const std::string skip(offset, ' ');
        const uint16_t motor_offset = offset + 4u;
        std::string text_motor;
        if (motor.has_value() == true)
        {
            text_motor = motor.value().print(motor_offset);
        }
        else
        {
            const std::string skip(motor_offset, ' ');
            text_motor = skip + std::string("no_set");
        }
        const std::string text =
            std::format(
                "{0:}model: {1:}\n"
                "{0:}count_wheels: {2:}\n"
                "{0:}count_seats: {3:}\n"
                "{0:}motor:\n{4:}\n",
                skip, model, count_wheels, count_seats, text_motor);
        return text;
    }
}
