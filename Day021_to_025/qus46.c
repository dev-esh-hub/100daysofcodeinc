/*
Q46: Write a program to print the following pattern: Using nested loop.
*****
*****
*****
*****
*****
*/

#include<stdio.h>

int main(){
    int i = 1;
    for (i; i<=5; i+=1){
        int j = 1;
        for (j; j<=5; j+=1){
            printf("*");
        }printf("\n");
    }
    return 0;
}
