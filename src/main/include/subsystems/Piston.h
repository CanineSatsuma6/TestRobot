#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/Solenoid.h>

class Piston : public frc2::SubsystemBase
{
    public:
        Piston();

        void Extend();
        void Retract();
        
        void Set(bool on);
        bool Get();

    private:
        frc::Solenoid _piston;
};
