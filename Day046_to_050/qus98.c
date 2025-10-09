// Q98: Print initials of a name with the surname displayed in full.

#include<stdio.h>
#include<string.h>

int main(){
    char a[50];
    printf("Enter your name (in long format): \n");
    fgets(a, sizeof(a), stdin);
    int len = strlen(a);
    if(a[len-1] == '\n') 
        a[len-1] = '\0'; // remove newline
    int last_space = -1;
    for(int i = len - 1; i >= 0; i--){
        if(a[i] == ' '){
            last_space = i;
            break;
        }
    }
    printf("The initials of name are:\n");
    // Print initials before last word
    for(int i = 0; i < last_space; i++){
        if(i == 0 && a[i] != ' '){
            printf("%c.", a[i]);
        }
        else if(a[i-1] == ' ' && a[i] != ' '){
            printf("%c.", a[i]);
        }
    }
    // Print surname in full
    if(last_space != -1){
        printf(" %s\n", &a[last_space + 1]);
    }
    return 0;
}