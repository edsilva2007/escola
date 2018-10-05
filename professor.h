#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "pessoa.h"

typedef struct {
    char *lattes; // http://buscatextual.cnpq.br/buscatextual/visualizacv.do?metodo=apresentar&id=K4707187D9
    Pessoa p;
}Professor;


/**
 * @brief lerProfessor Lê os dados de um professor
 * @return  Um novo Professor é criado
 */
Professor lerProfessor();

/**
 * @brief imprimirProfessor Imprime os dados de um professor
 * @param prof Variável com as informações do Professor a serem mostradas
 */
void imprimirProfessor(Professor prof);

#endif // PROFESSOR_H
