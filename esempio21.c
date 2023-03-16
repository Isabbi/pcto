#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool startsWith(char *string, char *regex) {
    bool sw = false;
    int i = 0;
    int x = 0;
    while(i<strlen(string)) {
        while(x<strlen(regex)) {
            if(string[i] == regex[x]) {
                sw = true;
            } else {
                sw = false;
                break;
            }
            x++;
        }
        i++;
    }
    return sw;
}

int main () {
    char str[100];
    char input[] = "";
    printf("Insert a string to check: ");
    scanf(" %s", input);
    strncpy(str, input, 9);
    printf("[DEBUG] copied string is %s\n", str);
    bool value = startsWith(str, "STOP");
    if(value == true) {
        printf("Match found!\n");
    } else {
        printf("No match found!\n");
    }
    return 0;
}