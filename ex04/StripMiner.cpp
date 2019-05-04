#include "StripMiner.hpp"

StripMiner::StripMiner()
{
}

StripMiner::~StripMiner()
{
}

StripMiner::StripMiner(StripMiner const &rhs)
{
	*this = rhs;
}

StripMiner &StripMiner::operator=(StripMiner const &rhs)
{
	return *this;
}

void StripMiner::mine(IAsteroid *asteroid)
{
	std::cout << "* strip mining ... got "
						<< asteroid->beMined() << " ! *" << std::endl;
}
