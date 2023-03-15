#include <stdio.h>

int main () {
    int i = 1;
    int input;
    int result = 0;
    while (1) {
        if (input<0) {
            break;
        }
        printf(" :>> %d\n", i);
        printf("Inserisci un numero: ");
        scanf("%d", &input);
        if (i == 1)
        {
            result += input;
        } else
        {
            result += input;
            result = result/2;
        }
        printf("Media numeri: %d\n", result);
        i++;
    }
    return 0;
}

