/*
Q50: Write a program to print the following pattern:
*****
  ****
    ***
      **
        *
*/

#include<stdio.h>

int main(){
    for (int i = 5; i>0; i-=1){
        for(int space = 0; space < 5-i; space +=1){
            printf("  ");
        }
        for (int j = 1; j<=i; j+=1){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
