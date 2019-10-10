#include "endereco.h"
#include <iostream>
using namespace std;

void Endereco::ler(){
    cout << " Informe o Enderecos: " << endl;
    cout << " Rua: " << endl;
    getline(cin,this->rua);

    cout << " Bairro: " << endl;
    getline(cin,this->bairro);


    cout << " Cidade: " << endl;
    getline(cin,this->cidade);


    cout << " Estado: " << endl;
    getline(cin,this->estado);


    cout << " Pais: " << endl;
    getline(cin,this->pais);


    cout << " Numero: " << endl;
    cin >> this->numero;

    cout << " Complemento: " << endl;
    getline(cin,this->complemento);

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
