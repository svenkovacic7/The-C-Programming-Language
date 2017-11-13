#include <stdio.h>

main(){
    int c, nl, tabs, blanks;

    nl = 0;
    tabs = 0;
    blanks = 0;
 while ((c = getchar()) != EOF){
        if(c == '\n'){
            ++nl;
        }
        if(c == '\t'){
            ++tabs;
        }
        if(c == ' '){
            ++blanks;
        }
}
    printf("\n%d new rows\n%d tabs\n%d white spaces", nl, tabs, blanks);
    return 0;
}

