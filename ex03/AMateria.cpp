#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
		: type(type), xp_(0)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(AMateria const &rhs)
		: type(rhs.type), xp_(0)
{
	*this = rhs;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	xp_ = rhs.xp_;
	return *this;
}

void AMateria::use(ICharacter &)
{
	xp_ += 10;
}
