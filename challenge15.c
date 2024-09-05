// Challenge 15 : Fusion de Deux Tableaux
// Écrivez un programme C qui fusionne deux tableaux d'entiers en un seul tableau.
// Le programme doit demander à l'utilisateur le nombre d'éléments pour chaque tableau,
// puis les éléments des deux tableaux, et afficher le tableau fusionné.

#include <stdio.h>

int main()
{
    int longeur1;
    printf("ecrir le nombre des elements por tableau 1:\n");
    scanf("%i", &longeur1);
    int tabeau1[longeur1];
    int sum = 0;

    for (size_t i = 0; i < longeur1; i++)
    {
        printf("ecrir le nombre %i:\n", i + 1);
        scanf("%i", &tabeau1[i]);
    }
    
    int longeur2;
    printf("ecrir le nombre des elements por tableau 2:\n");
    scanf("%i", &longeur2);
    int tableau2[longeur2];

    for (size_t i = 0; i < longeur2; i++)
    {
        printf("ecrir le nombre %i:\n", i + 1);
        scanf("%i", &tableau2[i]);
    }
    
    int longeur3 = longeur1 + longeur2;
    int tableau3[longeur3];

    for (size_t i = 0; i < longeur3; i++)
    {
        if(i < longeur1) {
            tableau3[i] = tabeau1[i];
        } else {
            tableau3[i] = tableau2[i - longeur1];
        }
    }
    
    printf("=======================\n");

    for (size_t i = 0; i < longeur3; i++)
    {
        printf("%i\n", tableau3[i]);
    } 
}