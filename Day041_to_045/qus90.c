// Q90: Toggle case of each character in a string.

#include<stdio.h>
#include<ctype.h>

int main(){
    char a[50];
    printf("Enter the string: \n");
    gets(a);
    for(int i=0; a[i]!='\0'; i+=1){
        if(isupper(a[i]))
            a[i] = a[i]+32;
        else if((islower(a[i])))
            a[i] = a[i]-32;
    }
    printf("The toggled updated string is: \n%s", a);
    return 0;
}