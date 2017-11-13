#include <stdio.h>

/* Experiment to find out what happens when printf's argument string
   contains \c, where c is some character not listed above. */

void main(){
    //printf("Test\c")  "unknown escape sequence : '\c';
    printf("Test\n");
}
