#include <iostream>
#include "alunos/crudaluno.h"

using namespace std;
int main()
{
    CrudAluno crud;
    crud.initCrud();
    int opcao = 1;
    while(opcao)
    {
        crud.processaEscolha();
        cout << "Digite 1 para continuar no menu de Alunos " << endl;
        cin >> opcao;
    }
    return 0;
}

