#include <stdio.h>

int main() {
    int T[100];
    int taille;
    int minNum = T[0];
    printf("donner le nombre des element de tableau: ");
    scanf("%d",&taille);
    for(int i=0; i<taille; i++)
    {
        printf("donner les elements: ");
        scanf("%d", &T[i]);
    }
    for(int i=0; i<taille;i++)
    {
        if(T[i] < minNum)
        {
            minNum = T[i];
        }
    }
    printf("les nombre minimal est: %d", minNum);
    
    
    

    return 0;
}