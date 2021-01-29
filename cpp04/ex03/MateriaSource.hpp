#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
# define LEARN_CAPACITY 4

class MateriaSource : public IMateriaSource
{
	private:
		const AMateria* knownmaterials[LEARN_CAPACITY];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &other);
		MateriaSource const &operator=(MateriaSource const &other);
		~MateriaSource();

		AMateria const *getMaterial(int index) const;
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif
