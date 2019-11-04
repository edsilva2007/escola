#include <iostream>
#include <new>

using namespace std;
unsigned long long int fat (int n){
    if(n <=0){
        return 1;
    }
    else{
        return n * fat(n-1);
    }
}

unsigned long long int fatorial (unsigned long long int n){
    return n==0 ? 1: n * fatorial(n-1);
}


int main () {
    cout << "************** Recursividade **************" << endl;
    unsigned long long int n, resultado;
    cout << "Informe o valor de n: ";
    cin >> n;
    resultado = fat(n);
    cout << "O fatorial e : " << resultado << endl;
    cout << "*****************************************" << endl;

    unsigned long long int fat;
    cout << "Informe o valor de n: ";
    cin >> n;
    fat = fatorial(n);
    cout << "O fatorial e : " << fat << endl;
    cout << "*****************************************" << endl;

    cout << "************** Alocacao Dinamica com operador new **************" << endl;
    float *notas;
    int quantidade = 0, i;
    cout << "Informe quantas notas deseja armazenar: ";
    cin >> quantidade;
    notas = new float[quantidade];
//A linha acima equiva a:
// notas = (float*) malloc(quantidade * sizeof(float));

    for(i=0; i< quantidade; i++){
        cout << "Informe a nota " << i+1 << " ";
        cin >> notas[i];
    }

    cout << "As notas digitadas foram: ";
    for(i=0; i< quantidade; i++){
        cout << "  " << notas[i];
    }
    cout << endl;

    delete [] notas; // equivale ao comando free(notas);

return 0;
}
