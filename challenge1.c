#include <stdio.h>

// Challenge 1 : Initialisation et Affichage
// Écrivez un programme C qui initialise un tableau d'entiers avec des valeurs données et affiche ces valeurs.
//  Par exemple, vous pouvez initialiser un tableau avec les valeurs [1, 2, 3, 4, 5] 
//  et afficher chaque valeur sur une nouvelle ligne.

int main()
{
    int tableau[] = {1, 2, 3};
    size_t longueur = sizeof(tableau) / sizeof(tableau[0]);
    for (size_t i = 0; i < longueur; i++)
    {
        printf("%d\n", tableau[i]);
    }

    return 0;
}