// Challenge 13 : Afficher les Éléments Impairs
// Écrivez un programme C qui affiche uniquement les éléments impairs d'un tableau d'entiers.
// Le programme doit demander le nombre d'éléments et les éléments du tableau.

#include <stdio.h>

int main() {
   int longeur;
    printf("saisi le nombre d'elements\n");
    scanf("%i", &longeur);
    int nombres[longeur];
    
    for (int i = 0; i < longeur; i++) {
        printf("saisi l'element %i:\n", i + 1);
        scanf("%i", &nombres[i]);
    }
    printf("==================== \n");
    for (int i = 0; i < longeur; i++) {
        if(nombres[i] % 2 != 0) {
            printf("%i\n", nombres[i] );
        }
    }
}