#ifndef ESCOLA_H
#define ESCOLA_H
#include "alunos/crudaluno.h"
#include "professores/crudprofessor.h"
#include "cursos/crudcurso.h"

class Escola
{
private:
    CrudProfessor cProfessor;
    CrudAluno cAluno;
    CrudCurso cCurso;

public:
    Escola();    
};

#endif // ESCOLA_H
