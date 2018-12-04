#ifndef LISTADUPLAALUNOS_H
#define LISTADUPLAALUNOS_H
#include "aluno.h"
//8    Mudar a estrutura de alunos em escola de vetor para lista duplamente encadeada
typedef struct lista_dupla_Alunos {


}ListaDuplaAlunos;


/**
 * @brief insereAlunoInicioDupla Insere um aluno no inicio da lista
 * @param l ponteiro para o ínicio da lista
 * @param a aluno a ser Inserido @see Aluno
 * @return  retorna um ponteiro para a Lista atualizada
 */
ListaDuplaAlunos *insereAlunoInicioDupla(ListaDuplaAlunos *l, Aluno a);

/**
 * @brief insereAlunoFimDupla Insere um aluno no fim da lista
 * @param l ponteiro para o ínicio da lista
 * @param a aluno a ser Inserido @see Aluno
 * @return  retorna um ponteiro para a Lista atualizada
 */
ListaDuplaAlunos *insereAlunoFimDupla(ListaDuplaAlunos *l, Aluno a);


/**
 * @brief imprimeLista Imprime os dados de todos os alunos da lista
 * @param l
 */
void imprimeListaDupla(ListaDuplaAlunos *l);

/**
 * @brief excluiAlunoLista  - Exclui um aluno cuja matrícula é passada como parâmetro
 * @param l
 * @param matricula
 * @return
 */
ListaDuplaAlunos *excluiAlunoListaDupla(ListaDuplaAlunos *l, int matricula);



#endif // LISTADUPLAALUNOS_H
