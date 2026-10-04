#include <stdio.h>

int main(){
    int n; 

    printf("Entrer un nombre entier : ");
    scanf("%d", &n);

    printf("Representation binaire a l'envers : "); 

    if(n == 0){
        printf("0");
    } else {
        while(n > 0){
            printf("%d", n % 2);
            n = n / 2; 
        }
    }

    printf("\n");
    return 0; 
}