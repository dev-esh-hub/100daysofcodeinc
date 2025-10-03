// Q87: Count spaces, digits, and special characters in a string.

#include<stdio.h>
#include<ctype.h>

int main(){
    char a[50];
    printf("Enter the string: \n");
    gets(a);
    int space=0, digits=0, sc=0;
    for(int i=0; a[i]!='\0'; i+=1){
        if(isalpha(a[i]))
            continue;
        if(isspace(a[i]))
            space+=1;
        else if(isdigit(a[i]))
            digits+=1;
        else 
            sc+=1;
    }
    printf("Total number of: \nSpaces = %d \nDigits = %d \nSpecial Characters = %d \n", space, digits, sc);
    return 0;
}