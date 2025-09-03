#include <stdio.h>

int main() {
   int taille;
   int T[50];
   int multiplicateur;
   int resultats = 1;
   printf("entrer un multiplicateur: ");
   scanf("%d", &multiplicateur);
   printf("donner le nombre des elements: ");
   scanf("%d", &taille);
   
   for(int i = 1; i<=taille; i++)
   {
       printf("donner les elements: ");
       scanf("%d", &T[i]);
   }
   
   printf("voici votre resultats:\n");
   
   for(int i = 1; i <= taille; i++)
   {
       resultats = multiplicateur * T[i];
       printf("%d\n", resultats);
   }
   
    
    
    

    return 0;
}