#include "Ice.hpp"

Ice::Ice()
		: AMateria("Ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(Ice const &rhs)
		: AMateria("Ice")
{
	*this = rhs;
}

Ice &Ice::operator=(Ice const &rhs)
{
	AMateria::operator=(rhs);
	return *this;
}

AMateria *Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName()
						<< " *" << std::endl;
}