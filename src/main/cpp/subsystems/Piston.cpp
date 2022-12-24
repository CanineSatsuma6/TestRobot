#include "subsystems/Piston.h"

Piston::Piston() :
    _piston(frc::PneumaticsModuleType::CTREPCM, 1)
{
    _piston.Set(false);
}

void Piston::Extend()
{

}

void Piston::Retract()
{

}

void Piston::Set(bool on)
{

}

bool Piston::Get()
{

}
