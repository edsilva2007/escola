#include "aluno.h"

void Aluno::ler(){
    printf("\n Informe os dados do Aluno: \n");
    printf("\n Matricula: ");
    scanf("%d",&this->matricula);

    Pessoa::ler();

}
void Aluno::imprimir(){
    printf("\n Dados do Aluno: \n");
    printf("\n Matricula: %d \n", this->matricula);

    Pessoa::imprimir();

}

