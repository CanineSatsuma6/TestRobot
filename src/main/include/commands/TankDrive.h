#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>

#include "subsystems/Drive.h"

class TankDrive : public frc2::CommandHelper<frc2::CommandBase, TankDrive>
{
    public:
        TankDrive(Drive driveSubsystem, std::function<double()> left, std::function<double()> right);

        void Execute() override;
        bool IsFinished() override;

    private:
        Drive*                  _driveSubsystem;
        std::function<double()> _left;
        std::function<double()> _right;
};
