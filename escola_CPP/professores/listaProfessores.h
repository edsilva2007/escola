#ifndef LISTAPROFESSORES_H
#define LISTAPROFESSORES_H
#include "professor.h"

typedef struct lista_professor {

}ListaProfessor;

/**
 * @brief insereProfessorInicio Insere um Professor no inicio da lista
 * @param l ponteiro para o ínicio da lista
 * @param a Professor a ser Inserido @see Professor
 * @return  retorna um ponteiro para a Lista atualizada
 */
ListaProfessor *insereProfessorInicio(ListaProfessor *l, Professor a);

/**
 * @brief insereProfessorFim Insere um Professor no fim da lista
 * @param l ponteiro para o ínicio da lista
 * @param a Professor a ser Inserido @see Professor
 * @return  retorna um ponteiro para a Lista atualizada
 */
ListaProfessor *insereProfessorFim(ListaProfessor *l, Professor a);


/**
 * @brief imprimeLista Imprime os dados de todos os Professors da lista
 * @param l
 */
void imprimeLista(ListaProfessor *l);

/**
 * @brief excluiProfessorLista  - Exclui um Professor cuja matrícula é passada como parâmetro
 * @param l
 * @param matricula
 * @return
 */
ListaProfessor *excluiProfessorLista(ListaProfessor *l, int matricula);
#endif // LISTAPROFESSORES_H
