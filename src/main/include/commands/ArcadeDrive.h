#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>

#include "subsystems/Drive.h"

class ArcadeDrive : public frc2::CommandHelper<frc2::CommandBase, ArcadeDrive>
{
    public:
        ArcadeDrive(Drive driveSubsystem, std::function<double()> drive, std::function<double()> rotate);

        void Execute() override;
        bool IsFinished() override;

    private:
        Drive*                  _driveSubsystem;
        std::function<double()> _drive;
        std::function<double()> _rotate;
};
