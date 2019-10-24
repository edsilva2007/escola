#ifndef CONTATO_H
#define CONTATO_H
#include <iostream>
#include <string>
using namespace std;
class Contato
{
private:
    int telefone;
    string email;
public:
    void ler();
    void imprimir();
};

#endif // CONTATO_H
