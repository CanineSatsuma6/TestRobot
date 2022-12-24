#include "commands/TankDrive.h"

TankDrive::TankDrive(Drive driveSubsystem, std::function<double()> left, std::function<double()> right) :
    _driveSubsystem(&driveSubsystem),
    _left(left),
    _right(right)
{
    AddRequirements(_driveSubsystem);
}

void TankDrive::Execute()
{
    _driveSubsystem->TankDrive(_left(), _right());
}

bool TankDrive::IsFinished()
{
    return false;
}
