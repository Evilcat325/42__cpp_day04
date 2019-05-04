#ifndef FT_RADSCORPION_HPP
#define FT_RADSCORPION_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"

class RadScorpion : virtual public Enemy
{
private:
	/* data */
public:
	RadScorpion();
	~RadScorpion();
	RadScorpion(RadScorpion const &rhs);
	RadScorpion &operator=(RadScorpion const &rhs);
};

#endif /* FT_RadScorpion_HPP */
