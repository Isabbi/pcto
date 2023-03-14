#include <stdio.h>

int main() {
    int lato1, lato2, lato3;
    printf("Inserisci di seguito le tre misure: \n");
    scanf("%d%d%d", &lato1,&lato2,&lato3);
    if (lato1+lato2 > lato3) {
        if (lato2+lato3 > lato1) {
            if (lato3+lato1 > lato2) {
                printf("[0;32m%d, %d, %d sono lati di un triangolo\n0;0m", lato1, lato2, lato3);
                if (lato1 == lato2 && lato2 == lato3 && lato1 == lato3) {
                        printf("%d, %d, %d sono i lati di un triangolo equilatero\n", lato1, lato2, lato3);
                } 
                else if (lato1 != lato2 && lato2 != lato3 && lato1 != lato3) {
                    printf("%d, %d, %d sono i lati di un triangolo scaleno\n", lato1, lato2, lato3);
                } else {
                    printf("%d, %d, %d sono i lati di un triangolo isoscele\n", lato1, lato2, lato3);
                }
            } else {
                printf("%d, %d, %d non sono lati di un triangolo\n", lato1, lato2, lato3);
            }
        } else {
            printf("%d, %d, %d non sono lati di un triangolo\n", lato1, lato2, lato3);
        }
    } else {
        printf("[%d, %d, %d non sono lati di un triangolo\n", lato1, lato2, lato3);
    }
}