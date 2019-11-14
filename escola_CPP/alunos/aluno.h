#ifndef ALUNO_H
#define ALUNO_H
#include "../pessoa.h"
class Aluno : public Pessoa
{
private:
    int matricula;
public:
    //Sobrescrita de M�todo
    void ler();
    int getMatricula(){
        return this->matricula;
    }
    void setMatricula(int m){
        this->matricula = m;
    }

    void imprimir();


    Aluno(){

    }
};

#endif // ALUNO_H
