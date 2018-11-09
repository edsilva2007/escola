#ifndef CRUDCURSO_H
#define CRUDCURSO_H
#include "curso.h"
#include <string.h>
typedef struct {
    Curso *cursos;
    int qtdAtual;
    int qtdMaxima;

}CrudCurso;

void initCrud(CrudCurso *c, int qtdCursos){
    c->qtdMaxima = qtdCursos;
    c->cursos = (Curso*) malloc(sizeof(Curso)* c.qtdMaxima);
}

/** 26 - Italo Andradade  Ordenar o vetor de cursos por código,
 *usando: Insertionsort
 **/
/**
 * @brief ordenaCursosInsertionsort - Ordena os cursos por nome usando o método
 *InserctionSort
 * @param c ponteiro para o CrudCursos
 */
void ordenaCursosInsertionsort(CrudCurso *c);

//Filipe Perone
/**
 * @brief buscaBinaria Faz a busca binária em no vetor de Cursos em CrudCurso
 * @param c Ponteiro para o CrudCurso
 * @param nomeCurso Nome do curso a ser buscado
 * @return Retorna a posição do curso no vetor. Caso não encontre, retorna -1 (menos um)
 */
int buscaBinaria(CrudCurso *c, char *nomeCurso);

#endif // CRUDCURSO_H
