// 4. Implemente una funci�n que reciba una cadena y retorne su tama�o. (Iterativa y recursiva)

// retorna tamCadena+1 porque se considera '\0' al final de una cadena de char

int tamCadenaIt(char *array)
{
    int cont = 0;
    while( *(array+(cont++) ) != '\0');
    return cont;
}

int tamCadenaRec(char *array)
{
    if(*array++ == '\0')
        return 1;
    return 1 + tamCadenaRec(array);
}
