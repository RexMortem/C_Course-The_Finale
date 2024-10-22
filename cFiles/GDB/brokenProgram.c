#include <stdio.h>

void brokenFunction(){
    int* lastLocation = 10000;

    for(int* i = 0; i < lastLocation; i++){
        // WOOO LET'S OVERWRITE UNAUTHORISED MEMORY LOCATIONS
        *i = 1;
    }
}

int main(){
    int a = 5;
    printf("uh oh, we're about to break...\n");

    brokenFunction();

    return 0;
}