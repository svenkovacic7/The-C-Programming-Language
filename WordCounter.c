#include <stdio.h>

void main(){
    #define IN 1
    #define OUT 0

     int c, words, state;
     words = 0;

    while((c = getchar()) != EOF){
            if(c == '\n' || c == ' ' || c == '\t'){
                if(state == IN){
                    ++words;
                    state = OUT;
                }
            }
            else{
                state = IN;
        }
    }
    printf("%d", words);
}
