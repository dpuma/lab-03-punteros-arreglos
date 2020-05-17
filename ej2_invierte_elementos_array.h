// 2. Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva).

//iterativo
void invertirArrayIt(int *array, int n) // cambiar vers prof
{
    int *ptr = array+n-1;
    while(array < ptr)
        intercambio(array++, ptr--);
}

//recursivo
void invierte(int *pini, int *pfin)
{
    if(pini >= pfin)
        return;
    intercambio(pini, pfin);
    invierte(++pini, --pfin);
}

void invertirArrayRec(int *array, int n)
{
    int *pfin = array+n-1;
    invierte(array, pfin);
}
