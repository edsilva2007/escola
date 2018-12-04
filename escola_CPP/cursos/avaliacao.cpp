#include "avaliacao.h"


time_t Avaliacao::getData() const
{
    return data;
}

void Avaliacao::setData(const time_t &value)
{
    data = value;
}

string Avaliacao::getConteudo() const
{
    return conteudo;
}

void Avaliacao::setConteudo(const string &value)
{
    conteudo = value;
}

float Avaliacao::getNotaMaxima() const
{
    return notaMaxima;
}

void Avaliacao::setNotaMaxima(float value)
{
    notaMaxima = value;
}

float *Avaliacao::getNotas() const
{
    return notas;
}

void Avaliacao::setNotas(float *value)
{
    notas = value;
}
Avaliacao::Avaliacao()
{


}
