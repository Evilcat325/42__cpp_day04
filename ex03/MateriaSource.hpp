#ifndef FT_MATERIASOURCE_HPP
#define FT_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : virtual public IMateriaSource
{
private:
	AMateria *materias[4];
	int idx;

public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const &rhs);
	MateriaSource &operator=(MateriaSource const &rhs);

	void learnMateria(AMateria *);
	AMateria *createMateria(std::string const &type);
};

#endif /* FT_MateriaSource_HPP */
