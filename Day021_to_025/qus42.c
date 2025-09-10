// Q42: Write a program to check if a number is a perfect number.
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number to check wether it is perfect or not: \n");
    scanf("%d", &n);
    int i =1, sum =0;
    if (n>0){
        for(i; i<n; i+=1){
            if (n%i==0){
                sum+=i;
            }
        }
        sum == n ? printf("%d is perfect number!", n) : printf("%d is not a perfect number!", n);
    }    
    return 0;
}
