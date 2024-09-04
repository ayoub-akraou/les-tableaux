// Challenge 5 : Trouver le Minimum
// Écrivez un programme C qui trouve et affiche le plus petit élément dans un tableau d'entiers.
// Le programme doit demander le nombre d'éléments et les éléments du tableau.

#include <stdio.h>

int main()
{
    int longeur;
    printf("enter le nombre d'elements\n");
    scanf("%i", &longeur);
    int nombres[longeur];
    
    for (int i = 0; i < longeur; i++) {
        printf("saisi le nombre %i:\n", i + 1);
        scanf("%i", &nombres[i]);
    }
    
    int min = nombres[0];
    
    for (int i = 1; i < longeur; i++) {
        if(min > nombres[i]) {
            min = nombres[i];
        }
    }
    printf("le nombre min: %i", min);
    
    return 0;
}
