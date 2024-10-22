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
    int vitality = -1;
    int pointsRemaining; 

    while((strength < 0) || (strength > statPoints)){
        strength = requestInteger("Enter points to put into strength: ");
    }

    pointsRemaining = statPoints - strength; // now vitality must be taken from this

    while((vitality < 0) || (vitality > pointsRemaining)){
        vitality = requestInteger("Enter points to put into vitality: ");
    }

    pointsRemaining = pointsRemaining - vitality; 
    
    printf("---Your Stats---\n");
    printf("Strength: %d \n", strength);
    printf("Vitality: %d \n", vitality);
    printf("Remaining Points: %d \n", pointsRemaining);

    return 0;
}