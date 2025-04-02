#ifndef INSOMNIA_CAR_H
#define INSOMNIA_CAR_H

#include "vehicle.h"

namespace InSomnia
{
    class Car : public Vehicle
    {
    public:
        Car();
        Car(
            const std::string &model,
            const uint16_t count_wheels,
            const uint16_t count_seats,
            const std::optional<Motor> &motor);
        void start() override;

    private:
    };
}

#endif
