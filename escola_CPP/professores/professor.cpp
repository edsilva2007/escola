#include "professor.h"

void Professor::ler() {
    printf ("\n Lendo o curriculo do Professor: ");
    fflush(stdin);
    gets(this->curriculoLattes);
    printf ("\n Chamando metodo de Pessoa; ");
    Pessoa::ler();
}

void Professor::imprimir() {
    printf ("\n Curriculo do Professor: %s \n", this->curriculoLattes);
    Pessoa::imprimir();
}
