#include "aluno.h"
#include <iostream>

void Aluno::ler(){

    cout << " Informe os dados do Aluno:" << endl;
    cout << "Matricula: " << endl;
    cin >> this->matricula;

    Pessoa::ler();
}
void Aluno::imprimir(){
    cout << "Dados do Aluno: \n" << endl;
    cout << "Matricula: " << this->matricula << endl;

    Pessoa::imprimir();

}

