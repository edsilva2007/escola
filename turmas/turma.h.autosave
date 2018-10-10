#ifndef TURMA_H
#define TURMA_H
#include "professor.h"
#include "avaliacao.h"
typedef struct {
    int codigo;
    int ano;
    int semestre;
    Professor prof;
    int matriculasAlunos[];
    Avaliacao *atividades;
    int qtdAtualAvaliacoes;
    int qtdMaximaAvaliacoes;
    int qtdAtualAlunos;
    int qtdMaximaAlunos;
}Turma;
/**
 * @brief initTurma Inicia um ponteiro para turma
 * @param t Ponteiro para uma turma
 * @param N quantidade máxima de alunos da turma.
 * @param P Professor a ministrar a disciplina
 */
void initTurma(Turma *t, int N, Professor p, int ano, int semestre)
{
    t->prof = p;
    t->qtdMaximaAlunos = N;
    t->matriculasAlunos = (int*) malloc(sizeof(int)* t->qtdMaximaAlunos);
    t->qtdAtualAlunos = 0;
    t->qtdAtualAvaliacoes = 0;
    t->qtdMaximaAvaliacoes = 10;
    t->atividades = (Avaliacao*) malloc(sizeof(Avaliacao)* t->qtdMaximaAvaliacoes);
}

/**
 * @brief matriculaAluno - Matricula um aluno na Turma
 * @param t - Ponteiro para a Turma
 * @param matricula - número de matrícula do aluno
 */
void matriculaAluno(Turma *t, int matricula);

//CRUD Atividades

/**
 * @brief calculaMediaAluno - Retorna a média do aluno na disciplina
 * @param t
 * @param matricula - número de matrícula do aluno cuja nota é procurada
 * @return
 */
float calculaMediaAluno(Turma *t, int matricula);
#endif // TURMA_H
