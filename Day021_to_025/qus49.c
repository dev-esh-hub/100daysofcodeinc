/*
Q49: Write a program to print the following pattern:
5
45
345
2345
12345
*/

#include<stdio.h>

int main(){
    for (int i = 5; i>0; i-=1){
        for (int j = i; j<=5; j+=1){
            printf("%d", j);
        }printf("\n");
    }
    return 0;
}
