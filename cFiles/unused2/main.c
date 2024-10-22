#include <stdio.h>

int main(){
    int a,b;

    a = requestInteger("Enter a number: ");
    b = requestInteger("Enter another number: ");

    printf("The product of your numbers is: %d\n", a*b);
}