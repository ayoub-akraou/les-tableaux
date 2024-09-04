#include <stdio.h>

// Challenge 2 : Saisie et Affichage des Éléments
// Écrivez un programme C qui demande à l'utilisateur le nombre d'éléments d'un tableau,
//  puis demande à l'utilisateur de saisir ces éléments.
//  Affichez ensuite les éléments du tableau.

int main() {
    int longeur;

    printf("saisir le nombre d'elements d'un tableau: \n");
    scanf("%i", &longeur);
    printf("%i\n", longeur);

    char tableau[longeur][50];

    for (size_t i = 0; i < longeur; i++)
    {
        printf("saisir l'element %i\n", i + 1);
        scanf("%s", tableau[i]);
    }
    

    return 0;
}