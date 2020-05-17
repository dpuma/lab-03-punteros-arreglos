// 1. Implementar una función reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos de un arreglo. (Iterativa y recursiva).

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
