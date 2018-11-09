/*!
  \file pessoa.h
  \brief Define a biblioteca pessoa.h, o tipo Pessoa e as funções para manipulá-lo
*/
#ifndef PESSOA_H
#define PESSOA_H
#include "endereco.h"
#include "contato.h"


/*!
  \struct Pessoa
  \brief Define o tipo Pessoa e os seus campus
*/
typedef struct {
    char nome[300];     /**< Vetor de caracteres para armazernar o nome da Pessoa */
    char sexo;          /**< Armazena o sexo da Pessoa */
    int idade;          /**< Armazena a idade da Pessoa */
    int rg;             /**< Armazena o número de documento RG da Pessoa */
    int cpf;            /**< Armazena o número do documento CPF da Pessoa */
    Endereco casa;      /**< Armazena o Endereco da casa da Pessoa  \see Endereco */
    Endereco trabalho;  /**< Armazena o Endereco do trabalho da Pessoa  \see Endereco */
    Contato c;          /**< Armazena as informações de Contato da Pessoa  \see Contato */
}Pessoa;

//void imprimirDadosPessoa(Pessoa p);
//void atualizarEnderecoTrabalho(Pessoa *p);
//void atualizarEnderecoCasa(Pessoa *p);


Pessoa lerDadosPessoa(){
    Pessoa nova;
    printf("\n Informe os dados da pessoa: ");
    printf("\nNome: ");
    fflush(stdin);
    gets(nova.nome);
    printf("\nRg: ");
    scanf("%d",&nova.rg);
    printf("\nCPF: ");
    scanf("%d",&nova.cpf);
    printf("\nSexo: ");
    fflush(stdin);
    scanf("%c",&nova.sexo);
    printf("\nEndereco residencial: ");
    nova.casa = lerEndereco();
    printf("\nEndereco comercial: ");
    nova.trabalho = lerEndereco();
    nova.c = lerContato();
    return nova;
}

void imprimirDadosPessoa(Pessoa p){
    printf("\n Imprimindo os dados da pessoa: ");
    printf("\nNome: %s", p.nome);
    printf("\nRg: %d", p.rg);
    printf("\nCPF: %d", p.cpf);
    printf("\nSexo: %c", p.sexo);
    printf("\nEndereco residencial: ");
    imprimirEndereco(p.casa);
    printf("\nEndereco comercial: ");
    imprimirEndereco(p.trabalho);
}
#endif // PESSOA_H
