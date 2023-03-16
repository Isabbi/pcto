/*SCRIVI UN PROGRAMMA CHE STAMPA A SCHERMO INTERO LA LUNGHEZZA
DI UNA QUALUNQUE STRINGA INSERITA DA TERMINALE.*/

#include <stdio.h>

int main () {
    char stringa[] = "";
    printf("scrivi una parola\n");
    scanf(" %s", stringa);
    int i = 0;
    while(stringa[i] != '\0') {
        i++;
    }
    printf("La parola %s è lunga %d caratteri\n", stringa, i);
    return 0;
}
