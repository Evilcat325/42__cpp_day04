#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner()
{
}

DeepCoreMiner::~DeepCoreMiner()
{
}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const &rhs)
{
	*this = rhs;
}

DeepCoreMiner &DeepCoreMiner::operator=(DeepCoreMiner const &rhs)
{
	return *this;
}

void DeepCoreMiner::mine(IAsteroid *asteroid)
{
	std::cout << "* mining deep ... got "
						<< asteroid->beMined() << " ! *" << std::endl;
}
