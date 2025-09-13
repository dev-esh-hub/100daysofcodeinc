/*
Q47: Write a program to print the following pattern:
*
**
***
****
*****
*/

#include<stdio.h>

int main(){
    int i = 1;
    while (i <= 5){
        int j = 1;
        while (j<=i){
            printf("*");
            j+=1;
        }printf("\n");
        i+=1;
    }
    return 0;
}
