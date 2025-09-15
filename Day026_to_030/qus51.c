/*
Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/

#include<stdio.h>

int main(){
    for(int i = 5; i>=1; i-=1){
        for(int space = 1; space <=  i-1; space+=1){
            printf(" ");
        }
        for(int j = i; j<=5; j+=1){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}