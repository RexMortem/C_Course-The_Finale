#include <stdio.h>
#include <string.h>

int main(){
    char name[50] = "Edward ";
    strcat(name, "Denton");

    printf("%s\n", name); // Edward Denton 
    return 0;
}