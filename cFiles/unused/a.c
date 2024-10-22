#include <stdio.h>
#include <stdlib.h>

int main(){
    int width = 5; 
    int length = 10;
    int** arr = malloc(sizeof(int*) * width);

    for(int i = 0; i < width; i++){
        int* subArr = malloc(sizeof(int) * length);
        arr[i] = subArr;
    }

    int** anArr = malloc(sizeof(int) * length * width);

    return 0;
}