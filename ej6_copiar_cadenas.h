// 6. Implemente una función que reciba dos cadenas a y b; y copie los elementos de la cadena a para la cadena b.

void copiar(char *A, char *B)
{
    while(*B != '\0' && *A != '\0')
        *B++ = *A++;
    while(*B != '\0')
        *B++ = '0';
}
