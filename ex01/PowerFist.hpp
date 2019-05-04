#ifndef FT_POWERFIST_HPP
#define FT_POWERFIST_HPP

#include "AWeapon.hpp"
#include <iostream>

class PowerFist : virtual public AWeapon
{
private:
	/* data */
public:
	PowerFist();
	~PowerFist();
	PowerFist(PowerFist const &rhs);
	PowerFist &operator=(PowerFist const &rhs);

	void PowerFist::attack() const;
};

#endif /* FT_PowerFist_HPP */
