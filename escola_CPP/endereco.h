#ifndef ENDERECO_H
#define ENDERECO_H
#define TAM_NOME 300 /**< Tamanho dos textos */
#include <stdio.h>
#include <stdlib.h>
class Endereco {
private:
    char rua[TAM_NOME];
    int cep;
    char cidade[TAM_NOME];
    char estado[2];
    char bairro[TAM_NOME];
    int numero;
    char complemento[TAM_NOME];
    char pais[TAM_NOME];
public:
    void ler();
    void imprimir();
};

#endif // ENDERECO_H
