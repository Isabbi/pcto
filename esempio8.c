#include <stdio.h>

int main () {
    int anno2;
    int anno = 1969;
    printf("In che anno sei nato?");
    scanf("%d", &anno2);
    if (anno2 == anno) {
        printf("Sei nato %d, anno dell'allunaggio\n", anno);
    } else if (anno2 > anno) {
        printf("Sei nato %d anni dopo l'allunaggio\n", anno2-anno);
    } else {
        printf("Sei nato %d anni prima dell'allunaggio\n", anno-anno2);
    }
}