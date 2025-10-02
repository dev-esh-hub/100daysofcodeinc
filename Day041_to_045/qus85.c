// Q85: Reverse a string.

#include<stdio.h>
#include<string.h>

int main(){
    char a[50];
    printf("Enter a string: \n");
    gets(a);
    printf("The actual string is: \n%s", a);
    printf("\n");
    int i=0;
    // Length of string:
    int len = strlen(a);
    while(i<len/2){
        int temp = a[i];
        a[i] = a[len-1-i];
        a[len-1-i] = temp;
        i+=1;
    }
    printf("The new reversed string is: \n%s", a);
    return 0;
}