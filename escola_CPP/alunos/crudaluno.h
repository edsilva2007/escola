#ifndef CRUDALUNO_H
#define CRUDALUNO_H
#include "aluno.h"

/*****
 *  Classe Responsável por Gerenciar Alunos
 *  Cadastro
 *  Busca dados - Read
 *  Atualiza os dados de um Aluno
 *  Exclui um Aluno
 * */
class CrudAluno
{
private:
    Aluno *alunos;
    int quantidadeAtualAlunos;
    int quantidadeMaximaAlunos;

public:
    CrudAluno();
    //CRUD
    void initCrud(){
        cout << "Informe até quantos alunos deseja armazenar: ";
        cin >> this->quantidadeMaximaAlunos;
        this->alunos = (Aluno*) malloc(this->quantidadeMaximaAlunos * sizeof(Aluno));
        this->quantidadeAtualAlunos = 0;
    }
    void cadastrarAluno(){
        cout << "*************** Inserção de um novo Aluno *********************" << endl;
        //Inicia um novo Objeto do tipo Aluno e coloca na posição atual do Vetor
        this->alunos[this->quantidadeAtualAlunos]= Aluno();

        //Ler os dados do Alunos
        this->alunos[this->quantidadeAtualAlunos].ler();

        //Alterar a  quantidade atual de alunos
        this->quantidadeAtualAlunos ++;
    }
    void matricularAluno(){
        this->cadastrarAluno();
    }
    void editarAluno (int matricula);
    void editarAluno (string nome);
    Aluno *buscarAluno (int matricula){
        int i;
        Aluno *a = NULL;

        for(i=0;i < this->quantidadeAtualAlunos; i++ ){
            if(this->alunos[i].getMatricula() == matricula)
                return &this->alunos[i];
        }
        return a;
    }
    Aluno buscarAluno (string nome);
};

#endif // CRUDALUNO_H
