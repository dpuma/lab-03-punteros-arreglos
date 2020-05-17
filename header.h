#include <iostream>
using namespace std;

void imprimirArray(int *array, int n)
{
    while(n-- > 0)
        cout << *array++ << " ";
    cout << endl;
}

// intercambia contenido de punteros
void intercambio(int* A, int *B)
{
    int tmp = *A;
    *A = *B;
    *B = tmp;
}
