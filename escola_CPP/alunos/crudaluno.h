#ifndef CRUDALUNO_H
#define CRUDALUNO_H
#include "listaAlunos.h"
#include "arvoreAluno.h"
#include "listaDuplaAlunos.h"

class CrudAluno
{
private:
    Aluno *alunos;
    ListaAluno listaAluno;
    ArvoreAluno arvoreAluno;
    ListaDuplaAlunos listaDuplaAlunos;
    int quantidadeAtualAlunos;
    int quantidadeMaximaAlunos;

public:
    CrudAluno();
};

#endif // CRUDALUNO_H
