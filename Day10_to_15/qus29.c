// Q29: Write a program to calculate the factorial of a number.

#include<stdio.h>

int main(){
    int n, fact;
    int i = 1;
    fact = 1;
    printf("Enter the number you want to find the factorial: \n");
    scanf("%d", &n);
    if (n>=0){
        for (i; i<=n; i+=1){
            fact = fact * i;
        }
    }else 
        printf("Enter positive number for factorial!");
    printf("Factorial of %d is %d", n, fact);
    return 0;
}
