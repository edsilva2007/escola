#ifndef ALUNO_H
#define ALUNO_H
#include "pessoa.h"
class Aluno : public Pessoa
{
private:
    int matricula;
public:
    void ler();
    void imprimir();
};

#endif // ALUNO_H