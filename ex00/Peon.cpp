#include "Peon.hpp"

Peon::Peon(std::string iname) : Victim(iname)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(Peon const &rhs) : Victim(rhs)
{
	*this = rhs;
}

Peon &Peon::operator=(Peon const &rhs)
{
	this->name = rhs.name;
	return *this;
}

void Peon::getPolymorphed() const
{
	std::cout << name << " has been turned into a pink pony !" << std::endl;
}
