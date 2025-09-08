// Q38: Write a program to find the sum of digits of a number.
#include<stdio.h>

int main(){
    int n;
    printf("Enter number to find sum of its digit: \n");
    scanf("%d", &n);
    int altn = n;
    int rem, sum = 0;
    if (n>0){
        while (altn>0){
            rem = altn%10;
            sum += rem;
            altn/=10;
        }printf("Sum of digits of %d is %d", n, sum);
    }else {
        printf("Enter positive value!");
    }
    return 0;
}
