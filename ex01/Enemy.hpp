#ifndef FT_ENEMY_HPP
#define FT_ENEMY_HPP

#include <string>
#include <iostream>

class Enemy
{
private:
	int hp;
	std::string type;

public:
	Enemy(int hp, std::string const &type);
	virtual ~Enemy();
	Enemy(Enemy const &rhs);
	Enemy &operator=(Enemy const &rhs);

	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int);
};

#endif /* FT_Enemy_HPP */
