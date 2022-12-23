#pragma once

#include <frc2/command/SubsystemBase.h>

class Drive : public frc2::SubsystemBase
{
    public:
        Drive();

        void Periodic() override;

    private:
};
