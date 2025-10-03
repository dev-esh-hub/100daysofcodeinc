// Q88: Replace spaces with hyphens in a string.

#include<stdio.h>
#include<ctype.h>

int main(){
    char a[50];
    printf("Enter a string: \n");
    gets(a);
    for(int i=0; a[i]!='\0'; i+=1){
        if(isspace(a[i])){
            a[i] = '-';
        }
    }
    printf("New updated string is: \n%s", a);
    return 0;
}