#include <stdio.h>
//#include <math.h>

int potenza(int base, int esponente) {
    int result = 0;
    int i = 0;
    int op;
    while(i<=esponente) {
        op = base*esponente;
        result += op;
        op = 0;
        i++;
    }
    return result;
}

int main () {
    int base, esponente;
    printf("Inserisci base ed esponente: ");
    scanf("%d", &base);
    scanf("%d", &esponente);
    int f = potenza(base, esponente);
    printf("Il risultato di %d alla %d è %d\n", base, esponente, f);
}