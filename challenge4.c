#include <stdio.h>
// Challenge 4 : Trouver le Maximum
// Écrivez un programme C qui trouve et affiche le plus grand élément dans un tableau d'entiers.
// Le programme doit demander le nombre d'éléments et les éléments du tableau

int main()
{
    int longeur;
    printf("entrer le nombre d'elements\n");
    scanf("%i", &longeur);
    int nombres[longeur];
    int max = 0;
    
    for (int i = 0; i < longeur; i++) {
        printf("saisi le nombre %i:\n", i + 1);
        scanf("%i", &nombres[i]);
        if(max < nombres[i]) {
            max = nombres[i];
        }
    }
    printf("le nombre max: %i", max);
    
    return 0;
}
