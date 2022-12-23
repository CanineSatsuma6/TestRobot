#include "subsystems/Drive.h"

Drive::Drive() :
    _frontLeftMotor(1),
    _backLeftMotor(2),
    _frontRightMotor(3),
    _backRightMotor(4)
{
    _frontLeftMotor.SetInverted(false);
    _backLeftMotor.SetInverted(false);

    _frontRightMotor.SetInverted(true);
    _backRightMotor.SetInverted(true);

    _driveMode = DriveMode::Tank;
}

void Drive::ArcadeDrive(double drive, double rotate)
{

}

void Drive::TankDrive(double left, double right)
{

}

void Drive::SetDriveMode(DriveMode mode)
{
    
}