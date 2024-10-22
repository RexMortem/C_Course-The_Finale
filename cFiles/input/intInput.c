#include <stdio.h>

int main(){
    printf("Enter your number: ");

    int d;
    int n = scanf("%d", &d);

    if(n == 1){ // success! 
        printf("Your number is... %d!\n", d);
    }else{ // no replacements, so no integer :(
        printf("That is not an integer >:( \n");
    }

    return 0;
}