#include <stdio.h>

int main()
{
   int i=0;
   int n; 

   printf("Inserisci un numero\n");
   scanf("%d", &n);
   int array[n];
   int j;
   int k;

   while(i < n)
   {
      printf("Inserisci un numero\n");
      scanf("%d", &array[i]);
      i++;
   }
   i = 1;
   j = array[0];
   k = array[0];
   while (i < n)
   {
        if (array[i] < j)
        {
            j = array[i];
        }
        else if (array[i]>k)
        {
            k = array[i];
        }
        i++;
   }
   printf("Il numero più piccolo è %d e il numero più grande è %d\n", j, k);

}

/* SCRIVERE UN PROGRAMMA CHE PRENDA IN INGRESSO UN NUMERO N
E CREI UN ARRAY DI GRANDEZZA N CHE LÚTENTE RIEMPE DI NUMERI
UNO ALLA VOLTA. IL PROGRAMMA STAMPA A VIDEO IL NUMERO PIÙ 
GRANDE E IL PIÙ PICCOLO DELL'ARRAY */

                       