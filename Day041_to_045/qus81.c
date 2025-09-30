// Q81: Count characters in a string without using built-in length functions.

#include<stdio.h>

int main(){
    char a[50];
    printf("Enter the string: \n");
    gets(a);
    // To count characters:
    int count = 0;
    int i=0;
    while(a[i] != '\0'){
        count += 1;
        i+=1;
    }
    printf("Total numbers of character in string are: %d",count);
    return 0;
}