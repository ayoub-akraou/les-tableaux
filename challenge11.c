// Challenge 11 : Remplacer un Élément
// Écrivez un programme C qui remplace toutes les occurrences d'une 
// valeur spécifique dans un tableau d'entiers par une nouvelle valeur.
// Le programme doit demander à l'utilisateur le nombre d'éléments, les
// éléments du tableau, la valeur à remplacer, et la nouvelle valeur.
#include <stdio.h>

int main() {
   int longeur;
    printf("saisi le nombre d'elements\n");
    scanf("%i", &longeur);
    int nombres[longeur];
    
    for (int i = 0; i < longeur; i++) {
        printf("saisi l'element %i:\n", i + 1);
        scanf("%i", &nombres[i]);
    }
    
    int valeur_a_remplacer;
    printf("saisi la valeur à remplacer:\n");
    scanf("%i", &valeur_a_remplacer);
    
    int nouvelle_valeur;
    printf("saisi la nouvelle valeur:\n");
    scanf("%i", &nouvelle_valeur);
    
    int checker;
    checker = 0;
    for(int i = 0; i < longeur; i++) {
        if(nombres[i] == valeur_a_remplacer) {
            nombres[i] = nouvelle_valeur;
            checker = 1;
        }
    }
    
    if(checker == 0)  printf("le nombre souhaité n'existe pas\n");
    else {
        printf("resultat:\n");
        for(int i = 0; i < longeur; i++) {
            printf("%i\n", nombres[i]);
        }
    }
    
    
    return 0;
}
