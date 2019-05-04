#ifndef FT_IMININGLASER_HPP
#define FT_IMININGLASER_HPP

#include "IAsteroid.hpp"

class IMiningLaser
{
public:
	virtual ~IMiningLaser() {}
	virtual void mine(IAsteroid *) = 0;
};

#endif /* FT_IMiningLaser_HPP */
