/*
Q48: Write a program to print the following pattern:
1
12
123
1234
12345
*/

#include<stdio.h>

int main(){
    for(int i=1; i<=5; i+=1){
        int j = 1;
        while (j<=i){
            printf("%d", j);
            j+=1;
        }printf("\n");
    }
    return 0;
}
