#ifndef FT_ISQUAD_HPP
#define FT_ISQUAD_HPP

#include "ISpaceMarine.hpp"

class ISquad
{
public:
	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine *getUnit(int) const = 0;
	virtual int push(ISpaceMarine *&) = 0;
};

#endif /* FT_ISquad_HPP */
