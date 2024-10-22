#include <stdio.h>

int main(){
    char a,b,c,d;
    int nReads = scanf("%c%c%c%c", &a, &b, &c, &d); // read in 4 characters!
    
    printf("%d\n", nReads);
    return 0;
}