#include <iostream>

#include "vehicle.h"
#include "car.h"
#include "bicycle.h"

// vehicle - транпортное средство
// motor - двигатель
// car - легковая машина
// bicycle - велосипед

namespace InSomnia
{
    void show_vehicle(const Vehicle *vehicle);
}

int main()
{
    using InSomnia::Motor;
    using InSomnia::Car;
    using InSomnia::Bicycle;
    using InSomnia::show_vehicle;

    try
    {
        const std::string motor_model = "HYUNDAI Solaris G4FC";
        const double motor_power = 128.;
        const Motor motor(motor_model, motor_power);

        // const std::string motor_text = std::format("motor:\n{}\n", motor.print());
        // std::cout << motor_text;

        const std::string car_model = "HYUNDAI Solaris";
        const uint16_t car_count_wheels = 4u;
        const uint16_t car_count_seats = 5u;
        Car car(car_model, car_count_wheels, car_count_seats, motor);
        car.start();

        show_vehicle(&car);

        const std::string bicycle_model = "Felt Breed Advanced GRX 610";
        const uint16_t bicycle_count_wheels = 2u;
        const uint16_t bicycle_count_seats = 1u;
        Bicycle bicycle(bicycle_model, bicycle_count_wheels, bicycle_count_seats);

        show_vehicle(&bicycle);

        // show_vehicle(nullptr);
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    catch (...)
    {
        std::cout << "An incomprehensible error has occurred\n";
    }

    return 0;
}

namespace InSomnia
{
    void show_vehicle(const Vehicle *vehicle)
    {
        std::string vehicle_type;
        if (dynamic_cast<const Car*>(vehicle) != nullptr)
        {
            vehicle_type = "Car";
        }
        else if (dynamic_cast<const Bicycle*>(vehicle) != nullptr)
        {
            vehicle_type = "Bicycle";
        }
        else
        {
            throw std::runtime_error(
                "The vehicle contains an unsupported variety");
        }
        static constexpr uint16_t car_offset = 4u;
        const std::string text = vehicle->print(car_offset);
        const std::string result =
            std::format("{}:\n{}\n", vehicle_type, text);
        std::cout << result;
    }
}
