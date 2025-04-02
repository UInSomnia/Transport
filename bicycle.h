#ifndef INSOMNIA_BICYCLE_H
#define INSOMNIA_BICYCLE_H

#include <string>

#include "vehicle.h"

namespace InSomnia
{
    class Bicycle : public Vehicle
    {
    public:
        Bicycle();
        Bicycle(
            const std::string &model,
            const uint16_t count_wheels,
            const uint16_t count_seats);
        void start() override;

    private:
    };
}

#endif
