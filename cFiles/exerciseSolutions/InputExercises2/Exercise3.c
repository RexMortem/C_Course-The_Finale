#include <stdio.h>
#include <string.h>

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
    int statPoints = 100; 
    int stats[5];
    char* statNames[] = {"Strength", "Vitality", "Agility", "Intelligence", "Charisma"};

    int pointsRemaining = statPoints;

    for(int i = 0; i < 5; i++){
        int stat = -1; 

        char message[50] = "Enter points to put into ";
        strcat(message, statNames[i]);
        strcat(message, ": ");

        while((stat < 0) || (stat > pointsRemaining)){
            stat = requestInteger(message);
        }

        pointsRemaining -= stat;
        stats[i] = stat;
    }

    printf("---Your Stats---\n");

    for(int i = 0; i < 5; i++){
        printf("%s: %d \n", statNames[i], stats[i]);
    }
    
    printf("Remaining Points: %d \n", pointsRemaining);

    return 0;
}