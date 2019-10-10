#include "endereco.h"
#include <iostream>
using namespace std;

void Endereco::ler(){
    cout << " Informe o Enderecos: " << endl;
    cout << " Rua: " << endl;
    fflush(stdin);
    getline(cin,this->rua);
    fflush(stdin);
    cout << " Bairro: " << endl;
    getline(cin,this->bairro);

    fflush(stdin);
    cout << " Cidade: " << endl;
    getline(cin,this->cidade);


    cout << " Estado: " << endl;
    fflush(stdin);
    getline(cin,this->estado);

    fflush(stdin);
    cout << " Pais: " << endl;
    getline(cin,this->pais);

    fflush(stdin);
    cout << " Numero: " << endl;
    cin >> this->numero;
    fflush(stdin);
    cout << " Complemento: " << endl;
    getline(cin,this->complemento);
    fflush(stdin);
    cout << " Cep: " << endl;
    cin >> this->cep;
}

void Endereco::imprimir(){
    cout << "Rua: " << this->rua << endl;
    cout << "Bairro: " << this->bairro << endl;
    cout << "Cidade: " << this->cidade << endl;
    cout << "Estado: " << this->estado << endl;
    cout << "Pais: " << this->pais << endl;
    cout << "Numero: " << this->numero << endl;
    cout << "Complemento: " << this->complemento << endl;
    cout << "Cep: " << this->cep << endl;
}
