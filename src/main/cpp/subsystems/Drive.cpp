#include<cmath>
#include<algorithm>

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
    double left  = drive + rotate;
    double right = drive - rotate;
    double max   = std::max(std::abs(left), std::abs(right));

    if (max > 1)
    {
        left  /= max;
        right /= max;
    }

    TankDrive(left, right);
}

void Drive::TankDrive(double left, double right)
{
    _frontLeftMotor.Set(left);
    _backLeftMotor.Set(left);

    _frontRightMotor.Set(right);
    _backRightMotor.Set(right);
}

void Drive::SetDriveMode(DriveMode mode)
{
    if (_driveMode != mode)
    {
        _driveMode = mode;
    }
}
