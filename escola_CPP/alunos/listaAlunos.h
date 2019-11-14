#ifndef LISTAALUNOS_H
#define LISTAALUNOS_H
#include "aluno.h"

class ListaAluno {
    private:
        Aluno a;
        ListaAluno *proximo;
    public:


    /**
     * @brief insereAlunoInicio Insere um aluno no inicio da lista
     * @param l ponteiro para o ínicio da lista
     * @param a aluno a ser Inserido @see Aluno
     * @return  retorna verdadeiro se o aluno foi inserido
     */
    bool insereAlunoInicio(Aluno a);

    /**
     * @brief insereAlunoFim Insere um aluno no fim da lista
     * @param l ponteiro para o ínicio da lista
     * @param a aluno a ser Inserido @see Aluno
     * @return  retorna true se o aluno for inserido
     */
    bool insereAlunoFim(Aluno a)
    {
        ListaAluno *ultimo = this, *novo;
        while(ultimo->proximo != NULL)
        {
            ultimo = ultimo->proximo;
        }
        novo = new ListaAluno (a);
        ultimo->proximo = novo;

    }

    static bool estaVazia(ListaAluno *l){
        return l==NULL?true:false;
    }

    ListaAluno(){
        this->a = Aluno();
        this->proximo = NULL;
    }
    ListaAluno(Aluno a){
        this->a = a;
        this->proximo = NULL;
    }

    /**
     * @brief imprimeLista Imprime os dados de todos os alunos da lista
     * @param l
     */
    void imprimeLista( );

    /**
     * @brief excluiAlunoLista  - Exclui um aluno cuja matrícula é passada como parâmetro
     * @param l
     * @param matricula
     * @return
     */
    bool excluiAlunoLista( int matricula);


};

#endif // LISTAALUNOS_H
