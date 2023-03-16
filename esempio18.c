/* SCRIVI UN PROGRAMMA CHE STAMPA A SCHERMO UNA 
QUALUNQUE STRINGA CHE LE VENGA PASSATA DA TERMINALE,
MA AL CONTRARIO. LA STRINGA DEVE ESSERE INSERITA DALL'UTENTE.*/

#include <stdio.h>
int main()
{
    char stringa[100];

    printf("Inserisci una stringa: ");
    scanf(" %s", stringa);
    printf("%s\n", stringa);
    int i = 0;
    while (stringa[i] != '\0')
    {
        printf("%c ---%d\n", stringa[i], i);
        i++;
    }


    while (i >= 0)
    {
        printf("%c", stringa[i]);
        i--;
    }
}
