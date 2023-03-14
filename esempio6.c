#include <stdio.h>

int main() {
    int anno;
    printf("Inserisci l'anno: \n");
    scanf("%d", &anno);

    if (anno%4 == 0 && anno%100 != 0 || anno%400 == 0) 
    {
        printf("\033[0;32m%d bisestile\n\033[0;0m", anno);
    }

    else 
    {
        printf("\033[0;31m%d non è bisestile\n\033[0;0m", anno);
    }
    return 0;
}