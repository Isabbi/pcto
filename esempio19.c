#include <stdio.h>

int main()
{
    char stringa[100];

    printf("Inserisci una stringa: ");
    scanf(" %s", stringa);

    int i = 0;
    while (stringa[i] != '\0')
    {
        i++;
    }
    i--;
    int j = 0;
    char c;
    while (j < i)
    {
        c = stringa[j];
        stringa[j] = stringa[i];
        stringa[i] = c;
        i--;
        j++;
    }
    printf("%s\n", stringa);


}

//leggere una stringa in input con scanf e invertirla senza
//creare una seconda stringa