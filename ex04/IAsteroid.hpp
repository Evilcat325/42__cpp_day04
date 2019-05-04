#ifndef FT_IASTEROID_HPP
#define FT_IASTEROID_HPP

#include <string>

class IAsteroid
{
public:
	virtual ~IAsteroid() {}
	virtual std::string beMined() const = 0;
	virtual std::string getName() const = 0;
};

#endif /* FT_IAsteroid_HPP */
