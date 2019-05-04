#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string iname, std::string ititle) : name(iname), title(ititle)
{
	std::cout << iname << ", " << ititle << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title
						<< ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &rhs)
{
	*this = rhs;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &rhs)
{
	this->name = rhs.name;
	this->title = rhs.name;
	return *this;
}

// nope I am not gonna add getter and friend is your best friend!
// so I am throwing javascript stuff here.....
std::string Sorcerer::toString() const
{
	std::ostringstream sout;
	sout << "I am " << name << ", " << title << ", and I like ponies !" << std::endl;
	return sout.str();
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, const Sorcerer &sorcerer)
{
	out << sorcerer.toString();
	return out;
}
