
#ifndef FT_VICTIM_HPP
#define FT_VICTIM_HPP

#include <string>
#include <iostream>
#include <sstream>

class Victim
{
protected:
	std::string name;

public:
	Victim(std::string iname);
	~Victim();
	Victim(Victim const &rhs);
	Victim &operator=(Victim const &rhs);
	std::string toString() const;
	virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, const Victim &Victim);

#endif /* FT_Victim_HPP */
