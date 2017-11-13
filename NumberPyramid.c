#include <stdio.h>

main(){
    int input, i, j;
    int number = 0;
    printf("Enter the number of rows in your triangle : ");
    scanf("%d", &input);

    for(i = 0; i<input + 1; i = i + 1){
        for(j = 0; j<i; j = j + 1){
            number = number + 1;
            printf("%d ", number);
        }
        printf("\n");
    }
}
