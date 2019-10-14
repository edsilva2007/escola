#include <iostream>
#include "alunos/crudaluno.h"

using namespace std;
int main()
{
    CrudAluno crud;
    crud.initCrud();
    crud.cadastrarAluno();
    Aluno *b;

    b = crud.buscarAluno(234);
    if (b != NULL)
        b->imprimirNome();
    else
        cout << "Aluno nao encontrado" << endl;
    return 0;
}

