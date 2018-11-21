#include "escola.h"

#include <iostream>

using namespace std;

Escola::Escola(int qtdAluno, int qtdProfessor){
    this->qtdAtualAlunos = 0;
    this->qtdAtualProfessores = 0;

    this->qtdMaximaAlunos = qtdAluno;
    this->qtdMaximaProfessores = qtdProfessor;

    this->professores = (Professor *) malloc (this->qtdMaximaProfessores * sizeof(Professor));
    this->alunos = (Aluno *) malloc (this->qtdMaximaAlunos * sizeof(Aluno));
}

Escola::Escola () {
    this->qtdAtualAlunos = 0;
    this->qtdAtualProfessores = 0;

    cout << "Informe a quantidade máxima de Professores: " << endl;
    cin >> this->qtdMaximaProfessores;
    this->professores = (Professor *) malloc (this->qtdMaximaProfessores * sizeof(Professor));

    cout << "Informe a quantidade máxima de Alunos: " << endl;
    cin >> this->qtdMaximaAlunos;
    this->alunos = (Aluno *) malloc (this->qtdMaximaAlunos * sizeof(Aluno));
}
