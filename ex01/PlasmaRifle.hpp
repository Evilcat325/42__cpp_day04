
#ifndef FT_PLASMARIFLE_HPP
#define FT_PLASMARIFLE_HPP

#include "AWeapon.hpp"
#include <iostream>

class PlasmaRifle : virtual public AWeapon
{
private:
	/* data */
public:
	PlasmaRifle();
	~PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &rhs);
	PlasmaRifle &operator=(PlasmaRifle const &rhs);

	void attack() const;
};

#endif /* FT_PlasmaRifle_HPP */
