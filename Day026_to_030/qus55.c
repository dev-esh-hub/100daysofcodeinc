// Q55: Write a program to print all the prime numbers from 1 to n.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number upto which you want prime numbers: \n");
    scanf("%d", &n);
    int i, j, count;
    if (n>1){
        printf("Prime number between 1 and %d are :\n", n);
        for(i = 2; i<=n; i+=1){
            count = 0;
            for (j = 1; j<=i; j+=1){
                if(i%j==0){
                    count+=1;
                }  
            }
            if (count == 2)
                printf("%d\t", i);
        }
    }else 
        printf("No prime number in this range!\n");;
    return 0;
}
