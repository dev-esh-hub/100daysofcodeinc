// Q84: Convert a lowercase string to uppercase without using built-in functions.

#include<stdio.h>

int main(){
    char a[50];
    printf("Enter the string: \n");
    gets(a);
    int i=0;
    while(a[i]!='\0'){
        if(a[i]>='a' && a[i]<='z'){
            a[i] = a[i] - ('a' - 'A');
        }
        i+=1;
    }
    printf("The uppercase string is: \n%s", a);
    return 0;
}