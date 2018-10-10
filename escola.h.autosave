#ifndef ESCOLA_H
#define ESCOLA_H
#include "alunos/crudAlunos.h"
#include <time.h>
typedef struct {
    Aluno *alunos;
    ListaAluno *lista;
    ListaDuplaAlunos *listaDupla;
    ArvoreAluno *arvore;
    int quantidadeMaximaAlunos;
    int quantidadeAtualAlunos;
} Escola;

void rAluno (Escola *e);
void cAluno (Escola *e);
void uAluno (Escola *e);
void dAluno (Escola *e);

/**
 * @brief ordenaAlunosQuick - Lucas Tezolini - Ordenar o vetor de alunos por matrícula, usando: Quicksort
 * @param e
 */
void ordenaAlunosQuick(Escola *e);

/**
 * @brief ordenaAlunosSelection - Filipe Martins - Ordenar o vetor de alunos por matrícula, usando: SelectionSort
 * @param e
 */
void ordenaAlunosSelection(Escola *e);

/**
 * @brief ordenaAlunosShell -  3 - Gabriel Leonel    Ordenar o vetor de alunos por matrícula, usando: Shellsort
 * @param e
 */
void ordenaAlunosShell(Escola *e);

/**
 * @brief ordenaAlunosInsertion - 4 - Victor Martins   Ordenar o vetor de alunos por matrícula, usando: Insertionsort
 * @param e
 */
void ordenaAlunosInsertion(Escola *e);

/**
 * @brief ordenaAlunosBuble - 5 - Gabriel Gusmão  Ordenar o vetor de alunos por matrícula, usando: Bubblesort
 * @param e
 */
void ordenaAlunosBubble(Escola *e);

/**
 * @brief buscaBinaria - 6 - Pedro Bis    Implementar uma busca binária no vetor de alunos
 * @param e - Ponteiro para Escola
 * @param matricula - Matrícula do aluno
 * @return posição do aluno no vetor - caso não encontre, retorna -1
 */
int buscaBinaria (Escola *e, int matricula);

/*
 10    Implementar uma busca binária na árvore binária de alunos
 11 - Álvaro   Fazer CRUD de Professores
 12 - Ruan Riguetti   Ordenar o vetor de professores por cpf, usando: Quicksort
 13 - Heitor   Ordenar o vetor de professores por cpf, usando: Selectionsort
 14   Ordenar o vetor de professores por cpf, usando: Shellsort
 15   Ordenar o vetor de professores por cpf, usando: Insertionsort
 16 - Eduardo Meneguci    Ordenar o vetor de professores por cpf, usando: Bubblesort
 17    Implementar uma busca binária no vetor de professores
 18    Mudar a estrutura de professores em escola de vetor para lista simplesmente encadeada
 19    Mudar a estrutura de professores em escola de vetor para lista duplamente encadeada
 20 - Vinícius Barbosa    Mudar a estrutura de professores em escola de vetor para arvore binária
 21    Implementar uma busca binária na árvore binária de professores
 22 - Luiz Guilherme   Fazer CRUD de Cursos
 23 - Hiago Braz  Ordenar o vetor de cursos por código, usando: Quicksort
 24  Ordenar o vetor de cursos por código, usando: Selectionsort
 25  Ordenar o vetor de cursos por código, usando: Shellsort

 27  Ordenar o vetor de cursos por código, usando: Bubblesort
 28    Implementar uma busca binária no vetor de cursos
 29    Mudar a estrutura de cursos em escola de vetor para lista simplesmente encadeada
 30    Mudar a estrutura de cursos em escola de vetor para lista duplamente encadeada
 31    Mudar a estrutura de cursos em escola de vetor para arvore binária
 32    Implementar uma busca binária na árvore binária de cursos
 33 - Fábio Pezzin   Fazer CRUD de Turmas
*/

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
        case 2:
        {
            uAluno(e);
            break;
        }
        case 3:
        {
            rAluno(e);
            break;
        }
        case 4:
        {
            dAluno(e);
            break;
        }

    case 5:{
        int i;
        printf ("\n################## Salvando os dados ############\n");
        while(i<100){
            if(i%2 == 0)
                printf (".");
            i++;

        }
        printf ("\n");
        return;
        }
        }
}
}
void cAluno (Escola *e){
    e->alunos[ e->quantidadeAtualAlunos] = lerAluno();
    e->quantidadeAtualAlunos++;
}
void rAluno (Escola *e){
    int matriculaProcurada;
    printf ("\n Digite a matricula a ser buscada: ");
    scanf("%d",&matriculaProcurada);
    int i;
    int encontrou = 0; /**< Variável de controle
                   que verifica se um aluno foi encontrado  */
    for(i=0; i < e->quantidadeAtualAlunos; i++){
        if(matriculaProcurada == e->alunos[i].matricula){
            imprimirAluno(e->alunos[i]);
            encontrou = 1; /**< Marca como encontrado o Aluno */
            break; /**< Sai dor for **/
        }
    }
    if (!encontrou)
        printf ("\n Aluno nao encontrado: \n");
    system("pause");

}
void uAluno (Escola *e){
    int matriculaProcurada;
    printf ("\n Digite a matricula a ser buscada: ");
    scanf("%d",&matriculaProcurada);
    int i;
    int encontrou = 0; /**< Variável de controle
                   que verifica se um aluno foi encontrado  */
    for(i=0; i < e->quantidadeAtualAlunos; i++){
        if(matriculaProcurada == e->alunos[i].matricula){
            //imprimirAluno(e->alunos[i]);
            e->alunos[i] = lerAluno();
            encontrou = 1; /**< Marca como encontrado o Aluno */
            break; /**< Sai dor for **/
        }
    }
    if (!encontrou)
        printf ("\n Aluno nao encontrado: \n");
    system("pause");

}
void dAluno (Escola *e){

}
#endif // ESCOLA_H
