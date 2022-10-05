#include <stdio.h>
#include <stdlib.h>
#include "functions.c"

int main(){
    int number;
    int* values = (int*)malloc(0);
    int len;

    printf("Enter a number: ");
    scanf("%i", &number);
    length(number, &len);
    values = (int*)realloc(values, len * sizeof(int));
    get_digits(values, number, len);

    int sumOfValues = sum(values, len);
    do{
        step(values, len, sumOfValues);
        sumOfValues = sum(values, len);
        output(values, len);
        printf("= %i\n", sumOfValues);
    }while(sumOfValues < number);

    if(sum(values, len) == number)
        printf("The given number is a Keith Number.");
    else
        printf("The given number isn't a Keith Number.");

    fflush(stdin);
    getchar();
}