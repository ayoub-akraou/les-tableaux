// Challenge 10 : Rechercher un Élément
// Écrivez un programme C qui recherche un élément spécifique dans un
// tableau d'entiers en utilisant une recherche linéaire. 
// Le programme doit demander à l'utilisateur le nombre d'éléments, 
// les éléments du tableau, et l'élément à rechercher, 
// puis afficher si l'élément est présent ou non.
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
    
    int target;
    printf("saisi l'element recherché:\n");
    scanf("%i", &target);
    
    int checker;
    checker = 0;
    for(int i = 0; i < longeur; i++) {
        if(nombres[i] == target) {
             return printf("le nombre souhaité existe a l'indice: %i\n", i);
             checker = 1;
        }
    }
    
    if(checker == 0)  printf("le nombre souhaité n'existe pas\n");
    
    return 0;
}
