// Online C compiler to run C program online
#include <stdio.h>

int main(){

    int taille;
    int T[50];
    int x;
    int j;
    
    
    printf("entrer le nombre des elements: ");
    scanf("%d", &taille);
    for(int i = 0; i<taille; i++)
    {
        printf("entrer les elements: ");
        scanf("%d", &T[i]);
    }
    for(int i = 0; i<taille; i++)
    {
        for(int j=i; j<taille; j++)
        {
        if(T[j]<T[i])
            {
                x = T[i];
                T[i] = T[j];
                T[j] = x;
                
        
            }
        }
        
        
    }
    for(int i= 0; i<taille; i++)
    {
        printf("%d\n",T[i]);
    }

    
    

    return 0;
}
