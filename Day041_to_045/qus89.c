// Q89: Count frequency of a given character in a string.

#include<stdio.h>

int main(){
    char a[50];
    printf("Enter the string: \n");
    gets(a);
    char key;
    printf("Enter the character you want to find frequency of: \n");
    scanf(" %c", &key);
    int count=0;
    for(int i=0; a[i]!='\0'; i+=1){
        if(a[i]==key)
            count+=1;
    }
    printf("The frequency of '%c' in string '%s' is: %d", key, a, count);
    return 0;
}