#ifndef FT_AWEAPON_HPP
#define FT_AWEAPON_HPP

#include <string>

class AWeapon
{
private:
	std::string name;
	unsigned int damage;
	unsigned int apcost;

public:
	AWeapon(std::string const &name, int damage, int apcost);
	~AWeapon();
	AWeapon(AWeapon const &rhs);
	AWeapon &operator=(AWeapon const &rhs);
	virtual std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif /* FT_AWeapon_HPP */
