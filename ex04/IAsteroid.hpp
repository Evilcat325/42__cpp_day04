#ifndef FT_IASTEROID_HPP
#define FT_IASTEROID_HPP

class StripMiner;
class DeepCoreMiner;

#include <string>

class IAsteroid
{
public:
	virtual ~IAsteroid() {}
	virtual std::string beMined(StripMiner *) const = 0;
	virtual std::string beMined(DeepCoreMiner *) const = 0;
	virtual std::string getName() const = 0;
};

#endif /* FT_IAsteroid_HPP */
