#include <stdio.h>

int main() {
    char c;

    printf("Lettre\tCode ASCII\n");
    printf("------------------\n");

    // Minuscules
    for (c = 'a'; c <= 'z'; c++) {
        printf("%c\t%d\n", c, c);
    }

    // Majuscules
    for (c = 'A'; c <= 'Z'; c++) {
        printf("%c\t%d\n", c, c);
    }

    return 0;
}