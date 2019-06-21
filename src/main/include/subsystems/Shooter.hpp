#pragma once 

#include "Constants.hpp"
#include "communications/PublishNode.hpp"

namespace frc3512 {

class Shooter : public PublishNode {
public:

    //shoots 
    void Shoot();

    void ProcessMessage(const ButtonPacket& message) override;

};
}