/*
Q54: Write a program to print the following pattern:

*

***

*****
*******
***

*

*/

#include<stdio.h>

int main(){
    int i, j;
    for (i=1; i<=9; i+=1){
        int count;
        if (i==1 || i==9)
            count = 1;
        else if (i==3 || i==7)
            count = 3;
        else if (i==5)
            count = 5;
        else if (i==6)
            count = 7;
        else {
            printf("\n");
            continue; 
        }
        for (j=1; j<=count; j+=1){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
