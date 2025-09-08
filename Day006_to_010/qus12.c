// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>

int main(){
    int n;

    printf("Enter the number to check wheather positive, negative or zero: \n");
    scanf("%d", &n);

    if (n==0)
        printf("Number provided is zero!!!");
    else if (n<0)
        printf("Number provided is negative!!!");
    else 
        printf("Number provided is positive!!!");
    return 0;
}