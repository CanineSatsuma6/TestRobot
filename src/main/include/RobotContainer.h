#pragma once

#include <frc2/command/Command.h>

class RobotContainer
{
    public:
        RobotContainer();

        frc2::Command *GetAutonomousCommand();

    private:
        void ConfigureButtonBindings();
};
