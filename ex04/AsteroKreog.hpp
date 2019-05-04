#ifndef FT_ASTEROKREOG_HPP
#define FT_ASTEROKREOG_HPP

#include <string>
#include "IAsteroid.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"

class AsteroBocal : virtual public IAsteroid
{
private:
	/* data */
public:
	AsteroBocal();
	~AsteroBocal();
	AsteroBocal(AsteroBocal const &rhs);
	AsteroBocal &operator=(AsteroBocal const &rhs);

	std::string beMined(StripMiner *) const;
	std::string beMined(DeepCoreMiner *) const;
	std::string getName() const;
};

#endif /* FT_AsteroKreog_HPP */
