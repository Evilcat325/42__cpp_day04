#include "AsteroKreog.hpp"

AsteroBocal::AsteroBocal()
{
}

AsteroBocal::~AsteroBocal()
{
}

AsteroBocal::AsteroBocal(AsteroBocal const &rhs)
{
	*this = rhs;
}

AsteroBocal &AsteroBocal::operator=(AsteroBocal const &rhs)
{
	return *this;
}

std::string AsteroBocal::beMined(StripMiner *) const
{
	return "Krpite";
}
std::string AsteroBocal::beMined(DeepCoreMiner *) const
{
	return "Thorites";
}

std::string AsteroBocal::getName() const
{
	return "AsteroBocal";
}
