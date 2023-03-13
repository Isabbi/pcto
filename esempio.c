#include <stdio.h>

int main()
{
    int numero = 42;
    double numerolungo = 4242424242;
    float numeroconlavirgola = 4.2;
    char carattere = 'c';

    printf("il numero è: g%d\n", numero);
    printf("numero lungo è: %f, numero con la virgola è: %f\n", numerolungo, numeroconlavirgola);
    printf("il carattere è %c", carattere);
}