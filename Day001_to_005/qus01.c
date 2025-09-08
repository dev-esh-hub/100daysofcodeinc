// Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>

int main(){
    float first, second;

    printf("Enter a number to add: ");
    scanf("%f", &first);
    printf("Enter another number to add:  ");
    scanf("%f", &second);

    printf("The sum of numbers is %f", first + second);
    
    return 0;
}
