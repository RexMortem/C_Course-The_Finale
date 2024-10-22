#include <stdio.h>
#include <string.h>
#define nChars 15 

int main(){
    char ourString[nChars]; // can't do this with variables; have to use macros! 

    char* sP = fgets(ourString, nChars, stdin);

    if(sP == NULL){
        printf("Uh oh spaghettios\n");
        return -1;
    }

    printf("Output: %s\n", ourString); // or using sP
    printf("Size of string: %d %d \n", sizeof(ourString), sizeof(sP)); // oh no :( wrong string lengths!
    printf("Actual size of string: %d \n", strlen(ourString)); // includes the '\n' if there is one 

    return 0;
}