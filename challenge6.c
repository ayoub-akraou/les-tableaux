// Challenge 6 : Multiplication des Éléments
// Écrivez un programme C qui multiplie chaque élément d'un
// tableau d'entiers par un facteur donné et affiche le tableau résultant.
// Le programme doit demander le nombre d'éléments, les éléments du tableau,
// et le facteur de multiplication.


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
    
    int facteur;
    printf("le facteur de multiplication:");
    scanf("%i", &facteur);
    
    printf("le resultat:\n");
    
    for(int i = 0; i < longeur; i++) {
        printf("%i * %i = %i\n", nombres[i], facteur, nombres[i] * facteur);
    }
    
    return 0;
}
