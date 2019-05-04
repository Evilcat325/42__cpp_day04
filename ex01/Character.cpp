#include "Character.hpp"

Character::Character(std::string const &name)
		: name(name), ap(40)
{
}

Character::~Character()
{
}

Character::Character(Character const &rhs)
{
	*this = rhs;
}

Character &Character::operator=(Character const &rhs)
{
	name = rhs.name;
	ap = rhs.ap;
	weapon = rhs.weapon;
}

std::string Character::toString() const
{
	std::ostringstream sout;
	sout << name << " has " << ap << " and ";
	if (weapon == nullptr)
		sout << "is unarmed";
	else
		sout << " wields a " << weapon->getName();
	sout << std::endl;
	return sout.str();
}

void Character::recoverAP()
{
	ap = ap + 10 > 40 ? 40 : ap + 10;
}

void Character::attack(Enemy *enemy)
{
	if (weapon == nullptr)
		return;
	if (enemy == nullptr)
	{
		std::cout << "Enemy Already Died" << std::endl;
		return;
	}
	enemy->takeDamage(weapon->getDamage());
	if (enemy->getHP() == 0)
		delete enemy;
}

std::ostream &operator<<(std::ostream &out, const Character &character)
{
	out << character.toString();
	return out;
}
