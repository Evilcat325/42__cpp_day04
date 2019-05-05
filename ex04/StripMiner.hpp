#ifndef FT_STRIPMINER_HPP
#define FT_STRIPMINER_HPP

#include <iostream>
#include "IMiningLaser.hpp"

class StripMiner : public IMiningLaser
{
private:
	/* data */
public:
	StripMiner();
	~StripMiner();
	StripMiner(StripMiner const &rhs);
	StripMiner &operator=(StripMiner const &rhs);

	void mine(IAsteroid *);
};

#endif /* FT_StripMiner_HPP */
