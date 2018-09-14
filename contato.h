/*!
  \file contato.h
  \brief Define a biblioteca contato.h, o tipo Contato e as funções para manipulá-lo
*/
#ifndef CONTATO_H
#define CONTATO_H
#include <stdio.h>
#include <stdlib.h>

/*!
  \struct Contato
  \brief Define o tipo Contato e os seus campus
*/
typedef struct {
    char email[200];        /**< Vetor de caracteres para armazernar o email */
    char telefone[200];     /**< Vetor de caracteres para armazernar telefone */
}Contato;


Contato lerContato(){
    Contato novo;
    printf("\n Digite as informações de contato: ");
    printf("\nE-mail: ");
    fflush(stdin);
    gets(novo.email);
    printf("\nTelefone: ");
    fflush(stdin);
    gets(novo.telefone);

    return novo;
}

void imprimirContato(Contato n){
    printf("\n Informações de contato: ");
    printf("\nE-mail: %s", n.email);
    printf("\nTelefone: %s", n.telefone);
}

#endif // CONTATO_H
