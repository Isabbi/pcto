//SCRIVERE UN PROGRAMMA CHE CHIEDA ALL'UTENTE DI INSERIRE 
//UN INT ETA E STAMPARE A SCHERMO IL VALORE  

#include <stdio.h>

int main() {
    int età;
    char sesso;
    printf("Inserisci la tua età: ");
    scanf("%d", &età);
    printf("Inserisci  il tuo sesso:\nF (Femmina) | M (Maschio) | N (Preferisco non specificare): ");
    scanf(" %c", &sesso);
    printf("Hai %d anni e hai inserito %c\n", età, sesso);
    return 0;
}
