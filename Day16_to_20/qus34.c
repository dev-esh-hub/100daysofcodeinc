// Q34: Write a program to check if a number is prime.
#include<stdio.h>

int main(){
    int n, i=1, altn, count = 0;
    printf("Enter number to check prime or not: \n");
    scanf("%d", &n);
    altn = n;
    if (n>0){
        for (i; i<=n; i+=1) {
            if (altn%i==0)
            count+=1;
        }
        count >= 3 ? printf("%d is not a prime number!", n) : printf("%d is a prime number!", n);
    } else 
        printf("Enter positive number!");
    return 0;
}
