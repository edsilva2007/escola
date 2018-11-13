#ifndef CONTATO_H
#define CONTATO_H
class Contato
{
private:
    int telefone;
    char email[200];
public:
    void ler(){
        printf("\nInforme os dados de Contato: \n");
        printf("\nTelefone: ");
        scanf("%d", &this->telefone);
        printf("\nE-mail: ");
        fflush(stdin);
        gets(this->email);
    }
    void imprimir() {
        printf("\nDados de Contato: \n");
        printf("\nTelefone: %d ", this->telefone);
        printf("\nEmail: %s ", this->email);
    }
};

#endif // CONTATO_H
