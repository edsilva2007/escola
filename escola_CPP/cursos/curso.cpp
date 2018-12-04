#include "curso.h"


int Curso::getCodigo() const
{
    return codigo;
}

void Curso::setCodigo(int value)
{
    codigo = value;
}

string Curso::getEmenta() const
{
    return ementa;
}

void Curso::setEmenta(const string &value)
{
    ementa = value;
}

Professor *Curso::getProfessores() const
{
    return professores;
}

void Curso::setProfessores(Professor *value)
{
    professores = value;
}

int Curso::getCargaHoraria() const
{
    return cargaHoraria;
}

void Curso::setCargaHoraria(int value)
{
    cargaHoraria = value;
}

string Curso::getNome() const
{
    return nome;
}

void Curso::setNome(const string &value)
{
    nome = value;
}
Curso::Curso()
{

}
