#ifndef FT_SUPERMUTANT_HPP
#define FT_SUPERMUTANT_HPP

#include <string>
#include <iostream>
#include "Enemy.cpp"

class SuperMutant : virtual public Enemy
{
private:
	/* data */
public:
	SuperMutant();
	~SuperMutant();
	SuperMutant(SuperMutant const &rhs);
	SuperMutant &operator=(SuperMutant const &rhs);

	void takeDamage(int);
};

#endif /* FT_SuperMutant_HPP */
