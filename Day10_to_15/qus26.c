// Q26: Write a program to print numbers from 1 to n.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the natural number upto which you want to print: \n");
    scanf("%d", &n);

    int i = 1;

    if (n>0)
        while (i<=n){
            printf("%d\t", i);
            i+=1;
        }
    else 
        printf("%d is not a natural number!", n);
    return 0;
}


