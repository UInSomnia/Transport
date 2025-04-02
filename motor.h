#ifndef INSOMNIA_MOTOR_H
#define INSOMNIA_MOTOR_H

#include <string>
#include <format>

namespace InSomnia
{
    class Motor
    {
    public:
        Motor();
        Motor(
            const std::string &model,
            const double power);

        void set_active(const bool is_active);
        bool get_active() const;

        std::string print(const uint16_t offset) const;

    private:
        std::string model;
        double power;
        bool is_active;
    };
}

#endif
