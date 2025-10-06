// Q92: Find the first repeating lowercase alphabet in a string.

#include<stdio.h>
# include<string.h>
#include<ctype.h>

int main(){
    char a[50];
    printf("Enter the string: \n");
    gets(a);
    char key, found;
    int flag = 0;
    for(int i=0; a[i]!='\0'; i+=1){
        if (islower(a[i])){
            key = a[i];
            for(int j=i+1; a[j]!='\0'; j+=1){
                if(a[j]==key){
                    flag = 1;
                    found = a[j];
                    goto done;
                }
                else 
                    continue;   
            }
        }
    }
    done :
        if (flag==1)
            printf("The first repeating lowercase alphabet is %c", found);
        else 
            printf("No repeating lowercase alphabet!");
    return 0;    
}