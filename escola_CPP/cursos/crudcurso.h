#ifndef CRUDCURSO_H
#define CRUDCURSO_H
#include "curso.h"

class CrudCurso
{
private:
    Curso *cursos;
    int quantidadeAtualCursos;
    int quantidadeMaximaCursos;



    /** 26 - Italo Andradade  Ordenar o vetor de cursos por código,
     *usando: Insertionsort
     **/
    /**
     * @brief ordenaCursosInsertionsort - Ordena os cursos por nome usando o método
     *InserctionSort
     */
    void ordenaCursosInsertionsort( );

    //Filipe Perone
    /**
     * @brief buscaBinaria Faz a busca binária em no vetor de Cursos em CrudCurso
     * @param nomeCurso Nome do curso a ser buscado
     * @return Retorna a posição do curso no vetor. Caso não encontre, retorna -1 (menos um)
     */
    int buscaBinaria(char *nomeCurso);

public:
    CrudCurso();
};

#endif // CRUDCURSO_H
