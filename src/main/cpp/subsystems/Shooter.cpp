#include "subsystems/Shooter.hpp"
#include iostream

using namespace frc3512;

Shooter::Shooter() : PublishNode("Shooter"){};

void Shoot() { std::cout << "Shoot!"}; 

void Shooter::ProcessMessage(const ButtonPacket& message) {
    if(message.topic == "Robot/AppendageStick2" && message.button == 4 &&
    message.pressed) {
        std::cout << "Do something";
        CommandPacket message{"Down", true};
        Publish (message);
    }
}; 

