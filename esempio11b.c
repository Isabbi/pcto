#include <stdio.h>

int main() {
    int i = 0;
    int somma = 0;
    while (i<=100)
    {   
        if (i%2 == 0) {
            somma += i;
        } else{}
        i++;
    }
    printf("Somma totale: %d\n", somma);
    return 0;
}
