
#ifndef FT_SORCERER_HPP
#define FT_SORCERER_HPP

#include <string>
#include <iostream>
#include <sstream>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string name;
	std::string title;

public:
	Sorcerer(std::string iname, std::string ititle);
	~Sorcerer();
	Sorcerer(Sorcerer const &rhs);
	Sorcerer &operator=(Sorcerer const &rhs);

	std::string toString() const;
	void polymorph(Victim const &) const;
};

std::ostream &operator<<(std::ostream &out, const Sorcerer &sorcerer);

#endif /* FT_Sorcerer_HPP */
