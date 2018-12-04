#ifndef CRUDALUNO_H
#define CRUDALUNO_H
#include "listaAlunos.h"
#include "arvoreAluno.h"
#include "listaDuplaAlunos.h"

class CrudAluno
{
private:
    ListaAluno listaAluno;
    ArvoreAluno arvoreAluno;
    ListaDuplaAlunos listaDuplaAlunos;

public:
    CrudAluno();
};

#endif // CRUDALUNO_H
