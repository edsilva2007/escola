/*!
  \file endereco.h
  \brief Define a biblioteca endereco.h, o tipo Endereco e as funções para manipulá-lo
*/
#ifndef ENDERECO_H
#define ENDERECO_H
#include <stdio.h>
#include <stdlib.h>
#define TAM_NOME 300 /**< Tamanho dos textos */
 /*!
  \struct Endereco
  \brief Define o tipo Endereco e os seus campus
*/
typedef struct {
    char rua[TAM_NOME];             /**< Vetor de caracteres para armazernar o nome da rua \see TAM_NOME */
    char cidade[TAM_NOME];          /**< Vetor de caracteres para armazernar o nome da cidade \see TAM_NOME */
    char bairro[TAM_NOME];          /**< Vetor de caracteres para armazernar o nome do bairro \see TAM_NOME */
    char estado[2];                 /**< Vetor com 2 caracteres para armazernar a sigla do estado */
    char complemento[TAM_NOME];     /**< Vetor de caracteres para armazernar o complemento \see TAM_NOME */
    int numero;                     /**< Armazena o número do imóvel */
    int cep;                        /**< Armazena o número do cep */
}Endereco;
 /**
 * @brief Realiza as operações de leitura dos dados de um novo Endereço informado pelo Usuário
 * @return retorna o novo Endereço preenchido
 */
Endereco lerEndereco() {
    Endereco novo;
    printf ("\nInforme o Enderecos: ");
    printf("\nRua: ");
    fflush(stdin);
    gets(novo.rua);
    printf("\nBairro: ");
    fflush(stdin);
    gets(novo.bairro);
    printf("\nCidade: ");
    fflush(stdin);
    gets(novo.cidade);
    printf("\nEstado: ");
    fflush(stdin);
    gets(novo.estado);
    printf("\nNumero: ");
    scanf("%d",&novo.numero);
    printf("\nComplemento: ");
    fflush(stdin);
    gets(novo.complemento);
    printf("\nCep: ");
    scanf("%d",&novo.cep);
    return novo;
}
 /*!
 * \brief imprimirEndereco
 * \param e
 */
void imprimirEndereco(Endereco e)
{
    printf("\nRua: %s", e.rua);
    printf("\nBairro: %s", e.bairro);
    printf("\nCidade: %s", e.cidade);
    printf("\nEstado: %s", e.estado);
    printf("\nNumero: %d", e.numero);
    printf("\nComplemento: %s", e.complemento);
    printf("\nCep: %d\n", e.cep);
}
#endif // ENDERECO_H
