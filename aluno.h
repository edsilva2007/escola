/*!
  \file aluno.h
  \brief Define a biblioteca aluno.h, o tipo Aluno e as funções para manipulá-lo
*/
#ifndef ALUNO_H
#define ALUNO_H
#include "pessoa.h"


/*!
  \struct Aluno
  \brief Define o tipo Aluno e os seus campus
*/
typedef struct {
    int matricula;      /**< Armazena o número de matrícula do Aluno */
    Pessoa p;           /**< Todo aluno é uma  Pessoa. Por isso a variável p armazena os dados dessa Pessoa \see Pessoa */
}Aluno;

Aluno lerAluno(){
    Aluno a;
    printf("\n Informe os dados do Aluno: ");
    printf("\nMatricula: ");
    scanf("%d",&a.matricula);
    a.p = lerDadosPessoa();
    return a;
}
void imprimirAluno(Aluno a){
    printf("\n Dados do Aluno: ");
    printf("\nMatricula: %d \n",a.matricula);
    imprimirDadosPessoa(a.p);
}
#endif // ALUNO_H
