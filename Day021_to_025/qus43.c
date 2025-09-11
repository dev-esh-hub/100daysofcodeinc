// Q43: Write a program to check if a number is a strong number.
// Using user defined functions!

#include<stdio.h>

int fact(int n){
    int i=1, fact = 1;

    if (n>0){
        for(i; i<=n; i+=1){
            fact *= i;
        }
    }
    return fact;
}

int main(){
    int n, rem;
    int sum = 0;

    printf("Enter the number to check wether strong or not: \n");
    scanf("%d", &n);
    
    int altn = n;
    while(altn!=0){
        rem = altn%10;
        sum = sum + fact(rem);
        altn/=10;
    }
    sum == n ? printf("%d is a strong number!", n) : printf("%d is not a strong number!", n);
    return 0;
}
