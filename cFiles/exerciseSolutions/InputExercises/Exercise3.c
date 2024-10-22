#include <stdio.h>

int main(){
    int n; 
    int freq = 0;
    char c; 

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%c", &c);

        if(c == 'e'){
            freq++;
        }
    }

    printf("%d\n", freq);
    return 0;
}

/*
    This program does not require you to store the input stream, so the above solution is best. 
    However, you *could* solve this problem by storing the characters using malloc(n * sizeof(char)), and then inputting it as a character array.
    This is slower since you have to allocate the memory, but may also not work if you don't have enough memory to store a huge input stream. 

    Inputting as a string using %s will not work because %s reads until the first space, so this does not work for inputs with an 'e' after a space. 
*/