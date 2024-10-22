#include <stdio.h>
#define nChars 15 

int main(){
    char ourString[nChars]; // can't do this with variables; have to use macros! 

    for(int i = 0; i < nChars-1; i++){
        scanf("%c", ourString+i); // recall that an array can be treated as a pointer
    }

    ourString[nChars-1] = '\0'; // needed to make it a proper string
    printf("%s\n", ourString);

    return 0;
}