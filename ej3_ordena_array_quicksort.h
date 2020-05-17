// 3. Implementar una función que ordene los elementos de un arreglo: ascendente.

int* particion(int *it, int *pfin)     // pivot = *pfin;
{
    int *pindex = it;
    do {
        if(*it < *pfin)
            intercambio(it, pindex++);
    } while (it++ < pfin);
    intercambio(pfin, pindex);
    return pindex;
}

void quickSort(int *pini, int *pfin)
{
    if(pini < pfin)
    {
        int *p = particion(pini, pfin);
        quickSort(pini, (p-1));
        quickSort((p+1), pfin);
    }
}

void ordenarArray(int *array, int n)
{
    quickSort(array, array+n-1);
}
