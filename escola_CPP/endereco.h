#ifndef ENDERECO_H
#define ENDERECO_H
#define TAM_NOME 300 /**< Tamanho dos textos */
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
class Endereco {
private:
    string rua;
    int cep;
    string cidade;
    string estado;
    string bairro;
    int numero;
    string complemento;
    string pais;
public:
    void ler();
    void imprimir();
};

#endif // ENDERECO_H
