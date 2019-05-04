
#include "PowerFist.hpp"

PowerFist::PowerFist()
		: AWeapon("Power Fist", 50, 8)
{
}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(PowerFist const &rhs)
		: AWeapon(rhs)
{
}

PowerFist &PowerFist::operator=(PowerFist const &rhs)
{
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
