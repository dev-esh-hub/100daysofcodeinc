// Q7: Write a program to swap two numbers without using a third variable.

#include<stdio.h>

int main(){
    int first, second;
    
    printf("Enter first number: \n");
    scanf("%d", &first);
    printf("Enter second number: \n");
    scanf("%d", &second);
    printf("Before swapping numbers: a = %d, b = %d\n", first, second);

    first = first + second;
    second = first - second;
    first = first - second;

    printf("After swapping numbers: a = %d, b = %d\n", first, second);

    return 0;
}