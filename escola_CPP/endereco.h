#ifndef ENDERECO_H
#define ENDERECO_H
#define TAM_NOME 300 /**< Tamanho dos textos */
class Endereco {
    private:
    char rua[TAM_NOME];
    int cep;
    char cidade[TAM_NOME];
    char estado[2];
    char bairro[TAM_NOME];
    int numero;
    char complemento[TAM_NOME];
    char pais[TAM_NOME];
public:
    void ler(){
        printf ("\nInforme o Enderecos: ");
        printf("\nRua: ");
        fflush(stdin);
        gets(this->rua);
        printf("\nBairro: ");
        fflush(stdin);
        gets(this->bairro);
        printf("\nCidade: ");
        fflush(stdin);
        gets(this->cidade);
        printf("\nEstado: ");
        fflush(stdin);
        gets(this->estado);
        printf("\nPais: ");
        fflush(stdin);
        gets(this->pais);
        printf("\nNumero: ");
        scanf("%d",&this->numero);
        printf("\nComplemento: ");
        fflush(stdin);
        gets(this->complemento);
        printf("\nCep: ");
        scanf("%d",&this->cep);

    }
    void imprimir(){

    }


};

#endif // ENDERECO_H
