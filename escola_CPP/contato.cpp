#include "contato.h"
#include <iostream>
using namespace std;

void Contato::ler() {
    cout << "Informe os dados de Contato:" << endl;

    cout << "Telefone: " << endl;
    cin >> this->telefone;

    cout << "E-mail: " << endl;
    cin >> this->email;
}

void Contato::imprimir(){
    cout << "Dados de Contato: " << endl;
    cout << "Telefone: " << this->telefone << endl;
    cout << "Email: " << this->email << endl;
}
