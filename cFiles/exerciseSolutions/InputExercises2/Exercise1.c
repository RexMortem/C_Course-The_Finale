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

int main(){
    int statPoints = 10; 
    int strength = -1;
    int pointsRemaining; 

    while((strength < 0) || (strength > statPoints)){
        strength = requestInteger("Enter points to put into strength: ");
    }

    pointsRemaining = statPoints - strength;

    printf("---Your Stats---\n");
    printf("Strength: %d \n", strength);
    printf("Remaining Points: %d \n", pointsRemaining);

    return 0;
}