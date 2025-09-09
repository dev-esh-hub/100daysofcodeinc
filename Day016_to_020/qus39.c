// Q39: Write a program to find the product of odd digits of a number.
#include<stdio.h>

int main(){
    int n, rem;
    printf("Enter the number to find product of odd digits: \n");
    scanf("%d", &n);
    int i = 1, prod = 1, altn=n;

    while (altn!=0){
        rem = altn%10;
        if (rem%2!=0){
            prod*=rem;
            }
        altn/=10;
        }
        printf("Product of odd digits of %d is %d", n, prod);

    return 0;
}   

