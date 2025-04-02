#ifndef INSOMNIA_VEHICLE_H
#define INSOMNIA_VEHICLE_H

#include <stdint.h>
#include <optional>
#include <string>
#include <format>

#include "motor.h"

namespace InSomnia
{
    class Vehicle
    {
    public:
        Vehicle();
        Vehicle(
            const std::string &model,
            const uint16_t count_wheels,
            const uint16_t count_seats,
            const std::optional<Motor> &motor);
        virtual void start() = 0;
        std::string print(const uint16_t offset) const;

    protected:
        std::string model;
        uint16_t count_wheels;
        uint16_t count_seats;
        std::optional<Motor> motor;
    };
}

#endif
