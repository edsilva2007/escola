#ifndef CRUDPROFESSOR_H
#define CRUDPROFESSOR_H
#include "professor.h"
#include "listaProfessores.h"
#include "arvoreProfessor.h"
#include "listaDuplaProfessores.h"

class CrudProfessor
{
private:
    Professor *professores;
    ListaProfessor listaProfessor;
    ArvoreProfessor arvoreProfessor;
    ListaDuplaProfessores listaDuplaProfessores;

    int quantidadeAtualProfessores;
    int quantidadeMaximaProfessores;
public:
    CrudProfessor();
    void ordenarProfessorQuick(){

    }
};

#endif // CRUDPROFESSOR_H
