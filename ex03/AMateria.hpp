#ifndef FT_AMATERIA_HPP
#define FT_AMATERIA_HPP

class ICharacter;
#include <string>
#include "ICharacter.hpp"

class AMateria
{
private:
	std::string const type;
	unsigned int xp_;

public:
	AMateria(std::string const &type);
	virtual ~AMateria();
	AMateria(AMateria const &rhs);
	AMateria &operator=(AMateria const &rhs);

	std::string const &getType() const; //Returns the materia type
	unsigned int getXP() const;					//Returns the Materia's XP
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif /* FT_AMateria_HPP */
