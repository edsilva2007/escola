#ifndef CRUDALUNO_H
#define CRUDALUNO_H
#include "listaAlunos.h"
#include "arvoreAluno.h"
#include "listaDuplaAlunos.h"

class CrudAluno
{
private:
    Aluno *alunos;
    int quantidadeAtualAlunos;
    int quantidadeMaximaAlunos;
    /*
    ListaAluno listaAluno;
    ArvoreAluno arvoreAluno;
    ListaDuplaAlunos listaDuplaAlunos;
    */

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
    void matricularAluno();
    void editarAluno (int matricula);
    void editarAluno (string nome);
    Aluno buscarAluno (int matricula);
    Aluno buscarAluno (string nome);
};

#endif // CRUDALUNO_H
