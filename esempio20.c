#include <stdio.h>

int main() 
{
    char input[100]; // array per la stringa inserita dall'utente
    int i = 0; // indice per la stringa

    while (1) 
    {
        printf("Inserisci una stringa: ");
        scanf("%s", input);

        // stampa la stringa inserita dall'utente
        printf("Hai inserito: %s\n", input);

        // controlla se la stringa inizia con "STOP" e, in tal caso, esce dal ciclo
        if (input[0] == 'S' && input[1] == 'T' && input[2] == 'O' && input[3] == 'P') 
        {
            break;
        }
    }

    printf("Fine del programma.\n");

    return 0;
}

//leggere una stringa in input con scanf e invertirla senza
//creare una seconda stringa
