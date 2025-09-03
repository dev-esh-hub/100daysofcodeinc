// Q27: Write a program to print the sum of the first n odd numbers.

#include<stdio.h>

int main(){
    int i, sum, n, z;
    printf("Enter the number of odd numbers you want to find sum of: \n");
    scanf("%d", &n);
    sum = 0;
    i=1; 
    for (i; i<=n; i+=1){
        z = i*2-1;
        printf("%d\t", z);
        sum = sum+z;
        }
    printf("\nSum of first %d odd numbers is  = %d", n, sum);
    return 0;
}

