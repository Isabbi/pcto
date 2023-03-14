/*FARE UN PROGRAMMA CHE CHIEDA ALL'UTENTE IL SESSO, SE M STAMPA CHE É MASCHIO,
SE F: FEMMINA, SE N: NON IDENTIFICATO, IN QUALUNQUE ALTRO CASO STAMPI UN MESSAGGIO DI ERRORE. */ 

#include <stdio.h>

int main()
{
    char sesso;
    printf("Qual'è  il tuo sesso");
    scanf(" %c", &sesso);

    if (sesso == 'M')
    {
        printf("Sei maschio\n");

    }
    else if (sesso == 'F')
    {
        printf("Sei femmina\n");
    }
    else if (sesso == 'N')
    {
        printf("Preferisci non specificare\n");
    }
    else 
    {
        printf("Messaggio di errore\n");
    }
}