#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/motorcontrol/VictorSP.h>

typedef enum class DriveMode_S
{
    Tank,
    Arcade
} DriveMode;

class Drive : public frc2::SubsystemBase
{
    public:
        Drive();

        void ArcadeDrive(double drive, double rotate);
        void TankDrive(double left, double right);
        
        void SetDriveMode(DriveMode mode);

    private:
        frc::VictorSP _frontLeftMotor;
        frc::VictorSP _backLeftMotor;
        frc::VictorSP _frontRightMotor;
        frc::VictorSP _backRightMotor;

        DriveMode     _driveMode;
};
