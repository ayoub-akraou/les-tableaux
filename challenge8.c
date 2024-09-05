// Challenge 8 : Copie d'un Tableau
// Écrivez un programme C qui copie les éléments d'un tableau d'entiers 
// dans un autre tableau. Affichez les éléments du tableau original et du
// tableau copié pour vérifier que la copie est correcte.

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
    
    int copie_nombres[longeur];
    
    for(int i = 0; i < longeur; i++) {
        copie_nombres[i] = nombres[i];
        printf("original: %i  |  copie: %i\n", nombres[i], copie_nombres[i]);
    }
    
    return 0;
}
