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
    time_t getInicio() const;
    void setInicio(const time_t &value);
    time_t getFim() const;
    void setFim(const time_t &value);
    Avaliacao *getAvaliacoes() const;
    void setAvaliacoes(Avaliacao *value);
    int *getAlunosMatriculados() const;
    void setAlunosMatriculados(int *value);
    int getQuantidadeAtualAlunos() const;
    void setQuantidadeAtualAlunos(int value);
    int getQuantidadeMaximaAlunos() const;
    void setQuantidadeMaximaAlunos(int value);
    int getQuantidadeAtualAvaliacoes() const;
    void setQuantidadeAtualAvaliacoes(int value);
    int getQuantidadeMaximaAvaliacoes() const;
    void setQuantidadeMaximaAvaliacoes(int value);
    int getCpfProfessor() const;
    void setCpfProfessor(int value);
};

#endif // TURMA_H
