#include "turma.h"


time_t Turma::getInicio() const
{
    return inicio;
}

void Turma::setInicio(const time_t &value)
{
    inicio = value;
}

time_t Turma::getFim() const
{
    return fim;
}

void Turma::setFim(const time_t &value)
{
    fim = value;
}

Avaliacao *Turma::getAvaliacoes() const
{
    return avaliacoes;
}

void Turma::setAvaliacoes(Avaliacao *value)
{
    avaliacoes = value;
}

int *Turma::getAlunosMatriculados() const
{
    return alunosMatriculados;
}

void Turma::setAlunosMatriculados(int *value)
{
    alunosMatriculados = value;
}

int Turma::getQuantidadeAtualAlunos() const
{
    return quantidadeAtualAlunos;
}

void Turma::setQuantidadeAtualAlunos(int value)
{
    quantidadeAtualAlunos = value;
}

int Turma::getQuantidadeMaximaAlunos() const
{
    return quantidadeMaximaAlunos;
}

void Turma::setQuantidadeMaximaAlunos(int value)
{
    quantidadeMaximaAlunos = value;
}

int Turma::getQuantidadeAtualAvaliacoes() const
{
    return quantidadeAtualAvaliacoes;
}

void Turma::setQuantidadeAtualAvaliacoes(int value)
{
    quantidadeAtualAvaliacoes = value;
}

int Turma::getQuantidadeMaximaAvaliacoes() const
{
    return quantidadeMaximaAvaliacoes;
}

void Turma::setQuantidadeMaximaAvaliacoes(int value)
{
    quantidadeMaximaAvaliacoes = value;
}

int Turma::getCpfProfessor() const
{
    return cpfProfessor;
}

void Turma::setCpfProfessor(int value)
{
    cpfProfessor = value;
}
Turma::Turma()
{
}
