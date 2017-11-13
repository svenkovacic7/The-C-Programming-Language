#include <stdio.h>

main(){
    float cels, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    cels = lower;

    printf("%s\t%s\n", "Cels", "Fahr");
    while(cels <= upper){
        fahr = ((9.0/5.0) * cels) + 32;
        printf("%.0f\t%3.0f\n", cels, fahr);
        cels = cels + step;
    }
}
