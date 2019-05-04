#include "MiningBarge.hpp"

MiningBarge::MiningBarge()
{
	for (int i = 0; i < 4; ++i)
		miners[i] = nullptr;
}

MiningBarge::~MiningBarge()
{
	for (int i = 0; i < 4; ++i)
		if (miners[i] != nullptr)
			delete miners[i];
}

MiningBarge::MiningBarge(MiningBarge const &rhs)
{
	*this = rhs;
}

MiningBarge &MiningBarge::operator=(MiningBarge const &rhs)
{
	for (int i = 0; i < 4; ++i)
		miners[i] = rhs.miners[i];
	return *this;
}

void MiningBarge::equip(IMiningLaser *miner)
{
	for (int i = 0; i < 4; i++)
		if (miners[i] != nullptr)
		{
			miners[i] = miner;
			return;
		}
}

void MiningBarge::mine(IAsteroid *asteroid) const
{
	for (int i = 0; i < 4; i++)
		if (miners[i] != nullptr)
			miners[i]->mine(asteroid);
}
