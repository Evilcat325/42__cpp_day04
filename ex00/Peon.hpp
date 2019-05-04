#ifndef FT_PEON_HPP
#define FT_PEON_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon : virtual public Victim
{
private:
	/* data */
public:
	Peon(std::string iname);
	~Peon();
	Peon(Peon const &rhs);
	Peon &operator=(Peon const &rhs);

	void getPolymorphed() const;
};

#endif /* FT_Peon_HPP */
