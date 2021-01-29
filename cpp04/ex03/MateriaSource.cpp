#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < LEARN_CAPACITY; i++)
		this->knownmaterials[i] = NULL;
};
MateriaSource::MateriaSource(MateriaSource const &other) {
	for (int i = 0; i < LEARN_CAPACITY; i++)
		this->knownmaterials[i] = other.getMaterial(i);
}

MateriaSource const &MateriaSource::operator=(MateriaSource const &other) {
	for (int i = 0; i < LEARN_CAPACITY; i++)
		this->knownmaterials[i] = other.getMaterial(i);
	return *this;
}

AMateria const *MateriaSource::getMaterial(int index) const {
	if (index >= 0 && index < LEARN_CAPACITY)
		return this->knownmaterials[index];
}

MateriaSource::~MateriaSource() {};

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < LEARN_CAPACITY; i++)
	{
		if (this->knownmaterials[i] == NULL)
		{
			this->knownmaterials[i] = m;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < LEARN_CAPACITY; i++)
		if (this->knownmaterials[i] && this->knownmaterials[i]->getType() == type)
			return this->knownmaterials[i]->clone();
}
