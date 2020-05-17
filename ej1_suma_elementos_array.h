// 1. Implementar una funci�n reciba un arreglo de enteros y su tama�o y retorne la suma de los elementos de un arreglo. (Iterativa y recursiva).

int sumaArrayIt(const int *array, int n)
{
    int acum = 0;
    for(int i = 0; i < n; i++)
        acum += *array++;
    return acum;
}

int sumaArrayRec(const int *array, int n)
{
    //cout << *array << " " << n << endl;
    if (n == 1)
        return *array;
    return (*array + sumaArrayRec(++array, --n));
}
