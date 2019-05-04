
#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
		: name(name), apcost(apcost), damage(damage)
{
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(AWeapon const &rhs)
{
	*this = rhs;
}

AWeapon &AWeapon::operator=(AWeapon const &rhs)
{
	this->name = rhs.name;
	this->apcost = rhs.apcost;
	this->damage = rhs.damage;
}

int AWeapon::getAPCost() const
{
	return apcost;
}

int AWeapon::getDamage() const
{
	return damage;
}
