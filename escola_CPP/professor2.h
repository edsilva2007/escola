#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "pessoa.h"

class Professor : public Pessoa {
private:
    char *curriculoLattes;
	int numSala;
public:
    void ler ();
    void imprimir();
};

#endif // PROFESSOR_H
 // http://buscatextual.cnpq.br/buscatextual/visualizacv.do?metodo=apresentar&id=K4707187D9
