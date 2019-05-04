#include "Squad.hpp"

Squad::Squad() : count(0)
{
	head = new SquadNode();
	head->marine = nullptr;
	head->next = nullptr;
	tail = head;
}

Squad::~Squad()
{
	for (SquadNode *prev; head != nullptr;
			 prev = head, head = head->next, delete prev)
		if (head->marine)
			delete head->marine;
}

Squad::Squad(Squad const &rhs)
{
	*this = rhs;
}

Squad &Squad::operator=(Squad const &rhs)
{
	count = rhs.count;
	head = new SquadNode();
	head->marine = nullptr;
	head->next = nullptr;
	tail = head;
	SquadNode *curr = rhs.head->next;
	while (curr)
	{
		tail->next = new SquadNode();
		tail = tail->next;
		tail->marine = curr->marine->clone();
		tail->next = nullptr;
		curr = curr->next;
	}
	return *this;
}

int Squad::getCount() const
{
	return count;
}

ISpaceMarine *Squad::getUnit(int index) const
{
	if (index < 0 || index >= count)
		return nullptr;
	SquadNode *n = head->next;
	for (int i = 0; i < index; ++i)
		n = n->next;
	return n->marine;
}

int Squad::push(ISpaceMarine *unit)
{
	if (unit == nullptr)
		return count;

	for (SquadNode *curr = head->next; curr != nullptr; curr = curr->next)
		if (curr->marine == unit)
			return count;
	tail->next = new SquadNode();
	tail = tail->next;
	tail->marine = unit;
	tail->next = nullptr;
	return ++count;
}
