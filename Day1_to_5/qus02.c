// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>

int main(){
    int first, second, add, sub, mul, quo;

    printf("Enter first number \n");
    scanf("%d", &first);

    printf("Enter second number \n");
    scanf("%d", &second);

    add = first + second;
    sub = first - second;
    mul = first * second;
    quo = first / second;

    printf("Addition of numbers  is %d\n", add);
    printf("Substraction of numbers is %d\n", sub);
    printf("Multiplication of numbers is %d\n", mul);
    printf("Division of numbers is %d\n", quo);

    return 0;
}
