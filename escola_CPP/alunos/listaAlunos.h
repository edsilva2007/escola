#ifndef LISTAALUNOS_H
#define LISTAALUNOS_H
#include "aluno.h"

//7 - Otivo     Mudar a estrutura de alunos em escola de vetor para lista simplesmente encadeada
typedef struct lista_aluno {

}ListaAluno;

/**
 * @brief insereAlunoInicio Insere um aluno no inicio da lista
 * @param l ponteiro para o ínicio da lista
 * @param a aluno a ser Inserido @see Aluno
 * @return  retorna um ponteiro para a Lista atualizada
 */
ListaAluno *insereAlunoInicio(ListaAluno *l, Aluno a);

/**
 * @brief insereAlunoFim Insere um aluno no fim da lista
 * @param l ponteiro para o ínicio da lista
 * @param a aluno a ser Inserido @see Aluno
 * @return  retorna um ponteiro para a Lista atualizada
 */
ListaAluno *insereAlunoFim(ListaAluno *l, Aluno a);


/**
 * @brief imprimeLista Imprime os dados de todos os alunos da lista
 * @param l
 */
void imprimeLista(ListaAluno *l);

/**
 * @brief excluiAlunoLista  - Exclui um aluno cuja matrícula é passada como parâmetro
 * @param l
 * @param matricula
 * @return
 */
ListaAluno *excluiAlunoLista(ListaAluno *l, int matricula);
#endif // LISTAALUNOS_H
