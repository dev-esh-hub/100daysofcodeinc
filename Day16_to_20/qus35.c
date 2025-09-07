// Q35: Write a program to print all factors of a given number.
#include<stdio.h>

int main(){
    int n;
    int i = 1;
    printf("Enter the number you want to find factors of: \n");
    scanf("%d", &n);
    if (n>0){
        printf("Factors of %d are:\t", n);
        for (i; i<=n; i+=1){
            if (n%i==0){
                printf("%d\t", i);
            }
        }
    }else 
        printf("Enter positive value!");
    return 0;
}
