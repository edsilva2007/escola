#include <iostream>
#include <new>

using namespace std;
unsigned long long int fatorial (unsigned long long int n){
    return n==0 ? 1: n * fatorial(n-1);
}


int main () {
    cout << "************** Recursividade **************" << endl;
    unsigned long long int n, fat;
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

    for(i=0; i< quantidade; i++){
        cout << "Informe a nota " << i+1 << " ";
        cin >> notas[i];
    }

    cout << "As notas digitadas foram: ";
    for(i=0; i< quantidade; i++){
        cout << "  " << notas[i];
    }
    cout << endl;
return 0;
}
