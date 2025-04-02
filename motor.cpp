#include "motor.h"

namespace InSomnia
{
    Motor::Motor()
    {
        is_active = false;
        power = -1.;
    }

    Motor::Motor(
        const std::string &model,
        const double power)
    {
        this->model = model;
        this->power = power;
        this->is_active = false;
    }

    void Motor::set_active(const bool is_active)
    {
        this->is_active = is_active;
    }

    bool Motor::get_active() const
    {
        return is_active;
    }

    std::string Motor::print(const uint16_t offset) const
    {
        const std::string skip(offset, ' ');

        const std::string text =
            std::format(
            "{0:}model: {1:}\n"
            "{0:}power: {2:}\n"
            "{0:}is_active: {3:}\n",
            skip, model, power, is_active);
        return text;
    }
}
