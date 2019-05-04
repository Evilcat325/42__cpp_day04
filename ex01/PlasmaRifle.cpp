
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
		: AWeapon("Plasma Rifle", 21, 5)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &rhs)
		: AWeapon(rhs)
{
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &rhs)
{
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
