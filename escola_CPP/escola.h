#ifndef ESCOLA_H
#define ESCOLA_H
#include "aluno.h"
#include "professor.h"

class Escola
{
private:
    Aluno *alunos;
    Professor *professores;
public:
    Escola();
    void crudProfessor();
    void inserirProfessor();
    void excluirProfessor(int cpf);
    void alterarProfessor(int cpf);
    Professor buscarProfessor(int cpf);
};

#endif // ESCOLA_H
