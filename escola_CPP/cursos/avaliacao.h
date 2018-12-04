#ifndef AVALIACAO_H
#define AVALIACAO_H
#include <ctime>
#include <string>

using namespace std;

class Avaliacao
{
private:
    time_t data;
    string conteudo; //https://www.tutorialspoint.com/cplusplus/cpp_strings.htm
    float notaMaxima;
    float *notas;

public:
    Avaliacao();
    time_t getData() const;
    void setData(const time_t &value);
    string getConteudo() const;
    void setConteudo(const string &value);
    float getNotaMaxima() const;
    void setNotaMaxima(float value);
    float *getNotas() const;
    void setNotas(float *value);
};

#endif // AVALIACAO_H
