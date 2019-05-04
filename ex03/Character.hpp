#ifndef FT_CHARACTER_HPP
#define FT_CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

class Character : virtual public ICharacter
{
private:
	std::string const name;
	AMateria *materias[4];

public:
	Character(std::string name);
	~Character();
	Character(Character const &rhs);
	Character &operator=(Character const &rhs);

	std::string const &getName() const = 0;
	void equip(AMateria *m) = 0;
	void unequip(int idx) = 0;
	void use(int idx, ICharacter &target) = 0;
};

#endif /* FT_Character_HPP */
