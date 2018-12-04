#ifndef CURSO_H
#define CURSO_H

#include "professores/professor.h"
#include <string>

using namespace std;
class Curso
{
private:
    string nome; //https://www.tutorialspoint.com/cplusplus/cpp_strings.htm
    int cargaHoraria;
    Professor *professores;
    string ementa;
public:
    Curso();
};

#endif // CURSO_H
