#ifndef FT_MININGBARGE_HPP
#define FT_MININGBARGE_HPP

#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"

class MiningBarge
{
private:
	IMiningLaser *miners[4];

public:
	MiningBarge();
	~MiningBarge();
	MiningBarge(MiningBarge const &rhs);
	MiningBarge &operator=(MiningBarge const &rhs);
	void equip(IMiningLaser *);
	void mine(IAsteroid *) const;
};

#endif /* FT_MiningBarge_HPP */
