// 5. Implemente una funci�n que reciba dos cadenas a y b; dicha funci�n debe concatenar la cadena a a la cadena b.
// (asuma que la cadena b tiene el tama�o suficiente para contener los elementos de a).

void concatenar(char *A, char *B)
{
    while(*B != '0')
        B++;
    while(*A != '\0')
        *B++ = *A++;
}
