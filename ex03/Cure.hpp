#ifndef FT_CURE_HPP
#define FT_CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : virtual public AMateria
{
private:
	/* data */
public:
	Cure();
	~Cure();
	Cure(Cure const &rhs);
	Cure &operator=(Cure const &rhs);

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif /* FT_Cure_HPP */
