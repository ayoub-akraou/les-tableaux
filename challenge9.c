// Challenge 9 : Inversion d'un Tableau
// Écrivez un programme C qui inverse les éléments d'un tableau 
// d'entiers. Par exemple, si le tableau est [1, 2, 3, 4, 5], il doit 
// devenir [5, 4, 3, 2, 1]. Affichez le tableau inversé.

#include <stdio.h>

int main() {
   int longeur;
    printf("saisi le nombre d'elements\n");
    scanf("%i", &longeur);
    int nombres[longeur];
    
    for (int i = 0; i < longeur; i++) {
        printf("saisi le nombre %i:\n", i + 1);
        scanf("%i", &nombres[i]);
    }
    
    int nombres_inversé[longeur];
    
    for(int i = 0; i < longeur; i++) {
        nombres_inversé[longeur- 1 - i] = nombres[i];
    }
    
    for(int i = 0; i < longeur; i++) {
        printf("original: %i  |  inversé: %i\n", nombres[i], nombres_inversé[i]);
    }
    
    return 0;
}
