#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {

	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other) {

	for (int i = 0; i < 4; i++) {
		if (materias[i]) {
			delete materias[i];
			materias[i] = NULL;
		}
	}
	
	for (int i = 0; i < 4; i++) {
		if (other.materias[i])
			this->materias[i] = other.materias[i]->clone();
		else
			this->materias[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {

	for (int i = 0; i < 4; i++)
		if (materias[i])
			delete materias[i];
}

MateriaSource &MateriaSource::operator = (const MateriaSource &other) {

	for (int i = 0; i < 4; i++) {
		if (materias[i]) {
			delete materias[i];
			materias[i] = NULL;
		}
	}

	for (int i = 0; i < 4; i++) {
		if (other.materias[i])
			this->materias[i] = other.materias[i]->clone();
		else
			this->materias[i] = NULL;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m) {

	int i = 0;
	for (; i < 4; i++)
		if (materias[i] == NULL)
			break ;
	if (i < 4)
		materias[i] = m;
	else
		std::cout << "The source is full\n";
}


AMateria *MateriaSource::createMateria(std::string const & type) {

	int i = 3;
	for (; i >= 0; i--)
		if (materias[i] && materias[i]->getType() == type)
			return (materias[i]->clone());
	return (NULL);
}
