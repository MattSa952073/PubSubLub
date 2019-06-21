#include "subsystems/Shooter.hpp"
#include iostream

using namespace frc3512;

void Shoot() { std::cout << "Shoot!"}; 

void Shooter::ProcessMessage(const ButtonPacket& message) {
    if(message.topic == "Robot/AppendageStick2" && message.button == 4 &&
    message.pressed) {
        Publish (message);
    }
}; 

