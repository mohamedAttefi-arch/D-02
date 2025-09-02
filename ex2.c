#include <stdio.h>

int main() {
    int T[100];
    int taille;
    printf("donner le nombre des element de tableau: ");
    scanf("%d",&taille);
    for(int i=0; i<taille; i++)
    {
        printf("donner les elements: ");
        scanf("%d", &T[i]);
    }
    for(int i=0; i<taille;i++)
    {
        printf("%d\n", T[i]);
    }
    
    
    

    return 0;
}