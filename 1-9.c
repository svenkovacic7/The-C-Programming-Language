#include <stdio.h>

void main(){
    int c, cl;

    while((c = getchar()) != EOF){
        if (cl == ' ' && c == cl ){
            continue;
        }
        else
            putchar(c);
        cl = c;
    }
}
