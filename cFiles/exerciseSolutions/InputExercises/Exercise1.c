#include <stdio.h>

int main(){
    char a;
    scanf("%c", a); // mistake! 
    printf("%c\n", a);

    return 0;
}

/*
    Bob has passed in the value of the variable a, instead of a pointer to the variable a. 

    Bob should have written scanf("%c", &a) instead of scanf("%c", a). 

    Two key things will happen: 

    1) The character will be read to the memory address corresponding to the value of a (which is uninitialised and so its value is a result of undefined behaviour).
    This is undefined behaviour and will likely lead to a segmentation fault, since characters are likely to be small values (and uninitialised values are likely to be 0) 
    and memory addresses with small values are likely to be reserved by low-level processes and hence forbidden to access (and overwrite)!

    2) The variable a will continue to be uninitialised so its value will be a result of undefined behaviour. Hence, the value it outputs will be some garbage value. 

    This is an example of undefined behaviour (and probably segmentation faults).
*/