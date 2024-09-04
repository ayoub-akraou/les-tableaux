#include <stdio.h>

// Challenge 3 : Somme des Éléments
// Écrivez un programme C qui calcule et affiche la somme des éléments d 'un tableau d' entiers.
// Le programme doit demander le nombre d'éléments,
// puis les éléments du tableau, et afficher la somme totale.

int main()
{
    int longeur;
    printf("ecrir le nombre des elements:\n");
    scanf("%i", &longeur);
    int nombres[longeur];
    int sum = 0;

    for (size_t i = 0; i < longeur; i++)
    {
        printf("ecrir le nombre %i:\n", i + 1);
        scanf("%i", &nombres[i]);
        sum += nombres[i];
    }
    printf("la somme total: %i", sum);

    
}