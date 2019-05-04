#include "Cure.hpp"

Cure::Cure()
		: AMateria("Cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(Cure const &rhs)
		: AMateria("Cure")
{
	*this = rhs;
}

Cure &Cure::operator=(Cure const &rhs)
{
	AMateria::operator=(rhs);
	return *this;
}

AMateria *Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << "“* heals " << target.getName()
						<< "’s wounds *" << std::endl;
}
