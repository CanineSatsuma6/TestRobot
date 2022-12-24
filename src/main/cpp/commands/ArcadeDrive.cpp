#include "commands/ArcadeDrive.h"

ArcadeDrive::ArcadeDrive(Drive driveSubsystem, std::function<double()> drive, std::function<double()> rotate) :
    _driveSubsystem(&driveSubsystem),
    _drive(drive),
    _rotate(rotate)
{
    AddRequirements(_driveSubsystem);
}

void ArcadeDrive::Execute()
{
    _driveSubsystem->ArcadeDrive(_drive(), _rotate());
}

bool ArcadeDrive::IsFinished()
{
    return false;
}
