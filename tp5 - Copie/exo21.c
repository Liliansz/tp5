#include <stdio.h>

int main(){
    int i;

    printf("Code\tCaractere\n");
    printf("-----------------\n");

    for(i = 0; i <= 127; i++){

        // De 32 a 126, les caracteres s affichent normalement
        if (i >= 32 && i <= 126){
            printf("%d\t%c\n", i, (char)i);
        } else {
            printf("%d\t(non imprimable)\n", i);
        }
    }

    return 0; 
}