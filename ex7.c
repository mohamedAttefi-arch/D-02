// Online C compiler to run C program online
#include <stdio.h>

int main(){

    int DIV , MODULE ;
    int FINAL = 0 ;
    
    scanf("%d", &MODULE);
    
    for(int i = 1 ; i < 100000 ; i *= 10){
        DIV = MODULE / (10000 / i);
        MODULE = MODULE %  (10000 / i);
        FINAL += DIV * i ;
    }
    
    printf("%d" , FINAL );
    
    return 0;
}
