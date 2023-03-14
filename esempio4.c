//SCRIVERE UN PROGRAMMA CHE CHIEDA ALL'UTENTE DI INSERIRE
//UN INT ETA E DICA SE É MAGGIORENNE O MENO

#include <stdio.h>

int main()
{
    int età;
    printf("Inserisci la tua età: ");
    scanf("%d", &età);

    if (età < 18)
    {
        printf("Sei minorenne\n");

    }
    else
    {
        printf("Sei maggiorenne\n");
    }
}