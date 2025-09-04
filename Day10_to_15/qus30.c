// Q30: Write a program to reverse a given number.
#include<stdio.h>

int main(){
    int n, rev = 0, i, z;
    printf("Enter the number you want to reverse: \n");
    scanf("%d", &n);
    z = n; // To keep the real value of number safe!
    while (z!=0){
        i = z%10;
        rev = rev *10 + i;
        z = z/10;
    }
    printf("The reverse of %d is %d", n, rev);
    return 0;
}


