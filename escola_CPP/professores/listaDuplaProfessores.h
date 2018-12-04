#ifndef ListaDuplaProfessores_H
#define ListaDuplaProfessores_H
#include "professor.h"

typedef struct lista_dupla_professores {


}ListaDuplaProfessores;

ListaDuplaProfessores *insereProfessorInicioDupla(ListaDuplaProfessores *l, Professor a);

/**
 * @brief insereProfessorFimDupla Insere um Professor no fim da lista
 * @param l ponteiro para o ínicio da lista
 * @param a Professor a ser Inserido @see Professor
 * @return  retorna um ponteiro para a Lista atualizada
 */
ListaDuplaProfessores *insereProfessorFimDupla(ListaDuplaProfessores *l, Professor a);


/**
 * @brief imprimeLista Imprime os dados de todos os Professors da lista
 * @param l
 */
void imprimeListaDupla(ListaDuplaProfessores *l);

/**
 * @brief excluiProfessorLista  - Exclui um Professor cuja matrícula é passada como parâmetro
 * @param l
 * @param matricula
 * @return
 */
ListaDuplaProfessores *excluiProfessorListaDupla(ListaDuplaProfessores *l, int matricula);



#endif // ListaDuplaProfessores_H
