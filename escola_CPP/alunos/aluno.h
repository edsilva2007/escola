#ifndef ALUNO_H
#define ALUNO_H
#include "../pessoa.h"
class Aluno : public Pessoa
{
private:
    int matricula;
public:
    //Sobrescrita de Método
    void ler();
    int getMatricula(){
        return this->matricula;
    }

    void imprimir();


    Aluno(){

    }
};

#endif // ALUNO_H
