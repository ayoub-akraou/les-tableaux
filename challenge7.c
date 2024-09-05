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
    
    for (int i = 0; i < longeur - 1; i++) {
        for (int i = 0; i < longeur - 1; i++) {
            if(nombres[i] > nombres[i + 1]) {
                int helper = nombres[i];
                nombres[i] = nombres[i + 1];
                nombres[i + 1] = helper;
            }
        }
    }
   
   int result[longeur];
   
   printf("le tableau en ordre croissant:\n {");
   
   
       for(int i = 0; i < longeur; i++) {
           if(i == longeur - 1) {
              printf("%i", nombres[i]);  
           } else {
              printf("%i, ", nombres[i]);
           }
           
       };
   
   printf("}");
    
    return 0;
}
