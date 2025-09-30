// Q82: Print each character of a string on a new line.

#include<stdio.h>

int main(){
    char a[50];
    printf("Enter the string: \n");
    gets(a);
    // To traverse each character and print in new line:
    int i=0;
    while(a[i] != '\0'){
        printf(" %c\n", a[i]);
        i+=1;
    }
    return 0;
}