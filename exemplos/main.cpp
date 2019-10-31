#include <iostream>
#include <new>

using namespace std;
unsigned long long int fatorial (unsigned long long int n){
    return n==0 ? 1: n * fatorial(n-1);
}


int main () {
    unsigned long long int n, fat;
    cout << "Informe o valor de n: ";
    cin >> n;
    fat = fatorial(n);
    cout << "O fatorial e : " << fat << endl;
return 0;
}
