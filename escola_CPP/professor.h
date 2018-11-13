#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "pessoa.h"

class Professor : public Pessoa {
private:
    char *curriculoLattes;
public:
    void ler (){
        printf ("\n Lendo o curriculo do Professor: ; ");
        fflush(stdin);
        gets(this->curriculoLattes);
        printf ("\n Chamando metodo de Pessoa; ");

        Pessoa::ler();
    }
    void imprimir() {
        printf ("\n Curriculo do Professor: %s \n", this->curriculoLattes);
        Pessoa::imprimir();
    }

};

#endif // PROFESSOR_H
 // http://buscatextual.cnpq.br/buscatextual/visualizacv.do?metodo=apresentar&id=K4707187D9
