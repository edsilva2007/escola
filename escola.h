#ifndef ESCOLA_H
#define ESCOLA_H
#include "aluno.h"
typedef struct {
    Aluno *alunos;
    int quantidadeMaximaAlunos;
    int quantidadeAtualAlunos;
} Escola;

/**
 * @brief initEscola Inicializa os dados da Escola cujo ponteiro
 * é passado como parâmetro. Solicita a quantidade Máxima de alunos suportada
 * pela Escola e aloca um vetor Alunos para o ponteiro passado como parâmetro.
 * @see Aluno
 * @param e ponteiro para Escola inicia os dados com zero Alunos
 */
void initEscola(Escola *e){
    e->quantidadeAtualAlunos = 0;

    printf("\n Digite a quantidade máxima de alunos: ");
    scanf("%d", &e->quantidadeMaximaAlunos );
    e->alunos =  (Aluno *) malloc(e->quantidadeMaximaAlunos * sizeof(Aluno));
}
void printCRUDAlunoMenu(){
    //Imprime um Menu com as Opções de CRUD Escola
    system ("cls"); // Limpa a tela do console
    printf ("\n############################################################");
    printf ("\n#####               Escolha uma alternativa:          ######");
    printf ("\n############################################################");
    printf ("\n######### 1 -> Inserir aluno:                         ######");
    printf ("\n######### 2 -> Alterar dados de um aluno:             ######");
    printf ("\n######### 3 -> Mostrar dados de um aluno:             ######");
    printf ("\n######### 4 -> Excluir um          aluno:             ######");
    printf ("\n######### 5 -> Sair:  ######################################");
    printf ("\n############################################################\n");
    printf ("\n#########\t -> ");

}

/**
 * @brief crudAluno
 * @param e
 */
void crudAluno(Escola *e) {
    while (1){
    printCRUDAlunoMenu();
    int opcao;

    fflush(stdin);
    scanf("%d", &opcao);
    switch (opcao) {
        case 1: {
            cAluno(e);
            break;
        }
    case 5: return;
    }
}
}
void cAluno (Escola *e){
    e->alunos[ e->quantidadeAtualAlunos] = lerAluno();
    e->quantidadeAtualAlunos++;
}
void rAluno (Escola *e, int matricula){

}
void uAluno (Escola *e, int matricula){

}
void dAluno (Escola *e, int matricula){

}
#endif // ESCOLA_H
