// Challenge 14 : Calculer la Moyenne
// Écrivez un programme C qui calcule la moyenne des éléments d'un tableau d'entiers.
// Le programme doit demander le nombre d'éléments,
// les éléments du tableau, puis afficher la moyenne.

#include <stdio.h>

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
    printf("le moyenne: %i", sum / longeur);

    
}