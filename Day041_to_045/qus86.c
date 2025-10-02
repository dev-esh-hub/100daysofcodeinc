// Q86: Check if a string is a palindrome.

// By creating other string and comparing!:

#include<stdio.h>
#include<string.h>
/*
int main(){
    char a[50];
    printf("Enter a string: \n");
    gets(a);
    printf("The actual string is: \n%s", a);
    printf("\n");
    // Length of string:
    int len = strlen(a);
    char b[50];
    int i=0; 
    while(a[i]!='\0'){
        b[i]=a[len-1-i];
        i+=1;
    }
    b[i] = '\0';
    printf("The reversed string is: \n%s", b);
    printf("\n");
    // To check for pallindrome:
    int flag=0;
    for(int i=0; i<len; i+=1){
        if (a[i]!=b[i]){
            flag=1;
            break;
        }       
    }
    (flag==0) ? printf("String is pallindrome!\n") : printf("String is not pallindrome!");
    return 0;
}
*/

/*
// Alternative and short (without creating any other string!):

int main(){
    char a[50];
    printf("Enter a string: \n");
    gets(a);
    printf("The actual string is: \n%s", a);
    printf("\n");
    // Length of string:
    int len = strlen(a);
    // To check for pallindrome:
    int flag=0;
    for(int i=0; i<len/2; i+=1){
        if(a[i]!=a[len-1-i]){
            flag=1;
            break;
        }
    }
    (flag==0) ? printf("String is pallindrome!\n") : printf("String is not pallindrome!");
    return 0;
}
*/