#ifndef FT_ASSAULTTERMINATOR_HPP
#define FT_ASSAULTTERMINATOR_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : virtual public ISpaceMarine
{
private:
	/* data */
public:
	AssaultTerminator();
	~AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &rhs);
	AssaultTerminator &operator=(AssaultTerminator const &rhs);
	ISpaceMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif /* FT_ASSAULTTERMINATOR_HPP */
