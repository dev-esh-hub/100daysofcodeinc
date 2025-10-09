// Q97: Print the initials of a name.

#include<stdio.h>

int main(){
    char a[50];
    printf("Enter you name (in long format): \n");
    fgets(a, sizeof(a), stdin);
    printf("The initials of name are: \n");
    if(a[0]!=' '){
        printf("%c.", a[0]);
    }
    for(int i=1; a[i]!='\0'; i+=1){
        if(a[i-1]==' ' && a[i]!=' ' && a[i]!='\n'){
            printf("%c.", a[i]);
        }
    }
    return 0;
}