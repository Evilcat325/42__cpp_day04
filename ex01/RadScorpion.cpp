#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
		: Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &rhs)
		: Enemy(rhs)
{
}

RadScorpion &RadScorpion::operator=(RadScorpion const &rhs)
{
	Enemy::operator=(rhs);
	return *this;
}
