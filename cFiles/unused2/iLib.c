#include <stdio.h>

int requestInteger(char* str){
    int d; 
    int n = 0;

    while(n == 0){ // keep asking until we get 1 replacement!
        printf("%s", str);
        n = scanf("%d", &d);

        if(n == 0){
            scanf("%*s"); // we don't need to provide a pointer to a string, if it just discards it!
        }
    }

    printf("\n"); 

    return d;
}