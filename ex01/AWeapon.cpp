
#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int damage, int apcost)
		: name(name), damage(damage), apcost(apcost)
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
	return *this;
}

std::string AWeapon::getName() const
{
	return name;
}

int AWeapon::getAPCost() const
{
	return apcost;
}

int AWeapon::getDamage() const
{
	return damage;
}
