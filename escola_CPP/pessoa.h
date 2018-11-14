#ifndef PESSOA_H
#define PESSOA_H
#include "endereco.h"
#include "contato.h"
#include <iostream>

using namespace std;
class Pessoa {
private:
    int cpf;
    char nome[300];
    char sexo[2];
    int rg;
    int idade;
    Endereco comercial, residencial;
    Contato c;
public:
    void ler(){
        cout << "Digite os dados de Pessoa" << endl;
        cout << "Nome: " << endl;
        fflush(stdin);
        gets(this->nome);

        cout << "sexo: " << endl;
        fflush(stdin);
        gets(this->sexo);

        cout << "RG: " << endl;
        fflush(stdin);
        scanf("%d",&this->rg);

        cout << "CPF: " << endl;
        fflush(stdin);
        scanf("%d",&this->cpf);

        cout << "Idade: " << endl;
        fflush(stdin);
        scanf("%d",&this->idade);

        cout << "Endereco Comercial" << endl;
        this->comercial.ler();

        cout << "Endereco Residencial" << endl;
        this->residencial.ler();

        cout << "Contato:" << endl;
        this->c.ler();
    }

    void imprimir(){
        cout << "Dados de Pessoa: " << endl;
        cout << "Nome: " << this->nome << endl;
        cout << "Sexo: " << this->sexo << endl;
        cout << "RG: " << this->rg << endl;
        cout << "CPF: " << this->cpf << endl;
        cout << "Idade: " << this->idade << endl;
        cout << "Endereco Comercial:" << endl;
        this->comercial.imprimir();
        cout << "Endereco Resindencial:" << endl;
        this->residencial.imprimir();
        cout << "Informacoes de Contato:" << endl;
        this->c.imprimir();
    }
};

#endif // PESSOA_H
