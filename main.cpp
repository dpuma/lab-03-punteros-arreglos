#include "header.h"
#include "ej1_suma_elementos_array.h"
#include "ej2_invierte_elementos_array.h"
#include "ej3_ordena_array_quicksort.h"
#include "ej4_tamano_cadena.h"
#include "ej5_concatenar_cadenas.h"
#include "ej6_copiar_cadenas.h"

int main()
{
    int A[] = {1,4,9,13,3,2,7,0,13,10};
    int n = sizeof(A)/sizeof(A[0]);

// ejercicio 1.
    //cout << "suma It : " << sumaArrayIt(A, n) << endl;
    //cout << "suma Rec: " << sumaArrayRec(A, n) << endl;

// ejercicio 2.
    //invertirArrayIt(A, n);
    //invertirArrayRec(A, n);
    //imprimirArray(A, n);

// ejercicio 3.
    //ordenarArray(A, n);
    //imprimirArray(A, n);

// ejercicio 4.
/*
    char cadena[] = "hola";
    cout << "cadena : " << cadena << endl;
    cout << "tam cadena It : " << tamCadenaIt(cadena) << endl;
    cout << "tam cadena Rec: " << tamCadenaRec(cadena) << endl;
*/
// ejercicio 5.
/*
    char a[] = "dias";
    char b[] = "buenos000000";
    cout << a << endl;
    cout << b << endl;
    concatenar(a,b);
    cout << "CONCATENADO : " << b << endl;
*/
// ejercicio 6.

    char a[] = "dias";
    char b[] = "buenos";
    cout << a << endl;
    cout << b << endl;
    copiar(a,b);
    cout << "Copiar A en B : "<< b << endl;

    return 0;
}
