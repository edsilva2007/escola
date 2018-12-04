#ifndef ESCOLA_H
#define ESCOLA_H
#include "aluno.h"
#include "professor.h"

class Escola
{
private:
    Aluno *alunos;
    Professor *professores;

    int qtdMaximaProfessores;
    int qtdMaximaAlunos;

    int qtdAtualProfessores;
    int qtdAtualAlunos;
public:
    Escola();
    Escola(int qtdAluno, int qtdProfessor);
    void crudProfessor();

    /* Sobrecarga de Métodos
     * Vários métodos com o mesmo nome. Mas parâmetros diferentes
     */
    void inserirProfessor();
    void inserirProfessor(Professor p);

    void excluirProfessor(int cpf);
    void excluirProfessor(int cpf, int mat);
    void excluirProfessor(char nome[]);

    void alterarProfessor(int cpf);
    void alterarProfessor(char nome[]);

    Professor buscarProfessor(int cpf);
    Professor buscarProfessor(char nome []);
};

#endif // ESCOLA_H
