#ifndef TURMA_H
#define TURMA_H
#include <ctime>
#include <string>
#include "avaliacao.h"


using namespace std;

class Turma
{
private:
    time_t inicio;
    time_t fim;
    Avaliacao *avaliacoes;
    int *alunosMatriculados; //matrícula dos Alunos
    int quantidadeAtualAlunos;
    int quantidadeMaximaAlunos;
    int quantidadeAtualAvaliacoes;
    int quantidadeMaximaAvaliacoes;
    int cpfProfessor;

public:
    Turma();
};

#endif // TURMA_H
