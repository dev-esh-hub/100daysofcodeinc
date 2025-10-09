// Q100: Print all sub-strings of a string.

#include<stdio.h>
#include<string.h>

int main(){
    char a[50];
    printf("Enter a string: \n");
    fgets(a, sizeof(a), stdin);
    int len = strlen(a);
    if(len > 0 && a[len-1] == '\n') 
        a[len-1] = '\0';
    int first=1;
    for(int i=0; a[i]!='\0'; i+=1){
        int j=i;
        while(a[j]!='\0'){
            if (!first) 
                printf(",");
            first = 0;
            for(int k = i; k <= j; k+=1){
                printf("%c", a[k]);
            }
            j+=1;
        }
    }
    return 0;
}