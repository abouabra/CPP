#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria* learnedMaterias[4];
    int materiaCount;

public:
    MateriaSource();
    MateriaSource(const MateriaSource& materiaSource);
    ~MateriaSource();

    MateriaSource& operator=(const MateriaSource& materiaSource);

    void learnMateria(AMateria* materia);
    AMateria* createMateria(const std::string& type);
};


#endif