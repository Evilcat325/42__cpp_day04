#ifndef FT_SQUAD_HPP
#define FT_SQUAD_HPP

#include <iostream>
#include "ISquad.hpp"

struct SquadNode
{
	ISpaceMarine *marine;
	SquadNode *next;
};

class Squad : virtual public ISquad
{
private:
	int count;
	SquadNode *head;
	SquadNode *tail;

public:
	Squad();
	~Squad();
	Squad(Squad const &rhs);
	Squad &operator=(Squad const &rhs);

	int getCount() const;
	ISpaceMarine *getUnit(int) const;
	int push(ISpaceMarine *&);
};

#endif /* FT_Squad_HPP */
