#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    this->materiaCount = 0;
    for (int i = 0; i < 4; i++)
        learnedMaterias[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource& materiaSource)
{
    this->materiaCount = materiaSource.materiaCount;
    for (int i = 0; i < 4; i++)
    {
        if (materiaSource.learnedMaterias[i])
            learnedMaterias[i] = materiaSource.learnedMaterias[i]->clone();
        else
            learnedMaterias[i] = nullptr;
    }
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete learnedMaterias[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource& materiaSource)
{
    if (this == &materiaSource)
        return *this;

    materiaCount = materiaSource.materiaCount;

    for (int i = 0; i < 4; i++)
    {
        delete learnedMaterias[i];

        if (materiaSource.learnedMaterias[i])
            learnedMaterias[i] = materiaSource.learnedMaterias[i]->clone();
        else
            learnedMaterias[i] = nullptr;
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
    if (this->materiaCount < 4)
    {
        learnedMaterias[this->materiaCount] = materia;
        this->materiaCount++;
    }
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
    for (int i = 0; i < 4; i++)
    {
        if (learnedMaterias[i] && learnedMaterias[i]->getType() == type)
        {
            return learnedMaterias[i]->clone();
        }
    }

    return nullptr;
}
