#include <stdio.h>

/* Write a program to copy its input to its output, replacing each
string of one or more blanks by a single blank */

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
