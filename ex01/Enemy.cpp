
#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
		: hp(hp), type(type)
{
}

Enemy::~Enemy()
{
}

Enemy::Enemy(Enemy const &rhs)
{
	*this = rhs;
}

Enemy &Enemy::operator=(Enemy const &rhs)
{
	this->hp = rhs.hp;
	this->type = rhs.type;
	return *this;
}

int Enemy::getHP() const
{
	return hp;
}

std::string Enemy::getType() const
{
	return type;
}

void Enemy::takeDamage(int dmg)
{
	hp = dmg > hp ? 0 : hp - dmg;
}
