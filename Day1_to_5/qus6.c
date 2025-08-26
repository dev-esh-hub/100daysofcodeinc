// Q6: Write a program to swap two numbers using a third variable.

#include<stdio.h>

int main(){
    int x, y, change;

    printf("Enter first number: \n");
    scanf("%d", &x);
    printf("Enter second number: \n");
    scanf("%d", &y);
    printf("Numbers before swaping: a = %d, b = %d\n", x, y);
    
    change = x;
    x = y;
    y = change;

    printf("Numbers after swapping: a = %d, b = %d\n", x, y);

    return 0;

}