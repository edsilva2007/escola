#ifndef CRUDALUNO_H
#define CRUDALUNO_H
#include "aluno.h"
#include <string>
using namespace std;

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
    Aluno alunos[200];
    int quantidadeAtualAlunos;
    int quantidadeMaximaAlunos;

public:
    CrudAluno();
    //CRUD
    void initCrud(){
        this->quantidadeMaximaAlunos = 200;
        this->quantidadeAtualAlunos = 0;
    }
    void imprimeMenu( ){
        cout << "****************** Gerenciamento de Alunos ******************" << endl;
        cout << "************ 1 - Cadastrar Aluno ****************************" << endl;
        cout << "************ 2 - Buscar Aluno por nome **********************" << endl;
    }
    void processaEscolha () {
        int op;
        this->imprimeMenu();
        cin >> op;
        switch(op){
            case 1: this->cadastrarAluno(); break;
            case 2: {
                    string nome;
                    cout << "Informe o nome que deseja buscar:" << endl;
                    fflush(stdin);
                    getline(cin,nome);
                    Aluno *a = NULL;
                    a = this->buscarAluno(nome);
                    if (a == NULL )
                        cout << "Aluno nao encontrado " << endl;
                    else
                        cout << "Aluno Encontrado " << endl;
                    break;
                    }
            default : cout << "Opcao inexistente " << endl;


        }

    }

    void cadastrarAluno(){
        cout << "*************** Insercao de um novo Aluno *********************" << endl;
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

        for(i=0;i < this->quantidadeAtualAlunos; i++ ){
            if(this->alunos[i].getMatricula() == matricula)
                return &this->alunos[i];

        }
        return NULL;
    }
    Aluno *buscarAluno (string nome)
    {
        int i;
        for(i=0;i < this->quantidadeAtualAlunos; i++ ){
            string aux = this->alunos[i].getNome();
            if (aux.compare(nome) == 0)
            //if(this->alunos[i].getNome().compare(nome) == 0)
               return &this->alunos[i];

        }
        return NULL;
    }
};

#endif // CRUDALUNO_H
