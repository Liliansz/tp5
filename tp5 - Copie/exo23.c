#include <stdio.h>

int main(){
    char tmp = '0'; 
    int i; 

    printf("Caractere\tCode ASCII\n");
    printf("--------------------------\n");

    for (i = 0; i <= 9; i++) {
        char c = tmp + i;
        printf("%c\t\t%d\n", c, c);
    }

    return 0;
}