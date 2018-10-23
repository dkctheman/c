#include <stdio.h>

char* read(){

    char ch;
    char* str;
    str = malloc(10);
    int i;
    i = 0;
    while(scanf(&ch)){
        str[i] = ch;
        i = i+1;
    }
}

void main(){

    char* str;
    str = read();
    printf ("C is a cool program!");
}