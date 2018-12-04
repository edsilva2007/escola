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
    int codigo;
public:
    Curso();
    int getCodigo() const;
    void setCodigo(int value);
    string getEmenta() const;
    void setEmenta(const string &value);
    Professor *getProfessores() const;
    void setProfessores(Professor *value);
    int getCargaHoraria() const;
    void setCargaHoraria(int value);
    string getNome() const;
    void setNome(const string &value);
};

#endif // CURSO_H
