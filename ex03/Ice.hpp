#ifndef FT_ICE_HPP
#define FT_ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : virtual public AMateria
{
private:
	/* data */
public:
	Ice();
	~Ice();
	Ice(Ice const &rhs);
	Ice &operator=(Ice const &rhs);

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif /* FT_Ice_HPP */
