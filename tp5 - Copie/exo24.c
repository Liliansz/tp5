#include <stdio.h>

int main() {
    char tab[] = "Bonjour Tout Le Monde ! 123";
    int i = 0;

    printf("Avant  : %s\n", tab);

    // Parcours de la chaine jusqu'au caractere nul '\0'
    while (tab[i] != '\0') {
        if (tab[i] >= 'a' && tab[i] <= 'z') {
            tab[i] = tab[i] - ('a' - 'A'); // Conversion en majuscule
        }
        i++;
    }

    printf("Apres  : %s\n", tab);

    return 0;
}