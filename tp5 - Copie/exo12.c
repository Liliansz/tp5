#include <stdio.h>

#define TAILLE 32

int main() {
    unsigned int n;
    unsigned int tab[TAILLE];
    int i;

    printf("Entrez un nombre entier : ");
    scanf("%u", &n);

    // On commence tout a la fin du tableau (index 31)
    int pos = TAILLE - 1;

    if (n == 0) {
        tab[pos] = 0;
        pos--;
    } else {
        while (n > 0) {
            tab[pos] = n % 2; // On met le bit a la position courante
            n = n / 2;
            pos--;            // On recule vers la gauche
        }
    }

    printf("Representation binaire a l'envers : "); 

    for(i = pos + 1; i < TAILLE; i++){
        printf("%u", tab[i]);
    }

    printf("\n");

    return 0; 
}