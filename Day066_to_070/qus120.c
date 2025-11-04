// Q120: Write a program to take a string input. Change it to sentence case.

#include<stdio.h>
#include<ctype.h>
#include<string.h>

void sentence_case(char str[100]){
    int capitalize = 1; 
    for (int i = 0; str[i] != '\0'; i+=1) {
        if (capitalize == 1 && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = toupper(str[i]); 
            capitalize = 0;
        } else if (str[i] == ' ') {
            capitalize = 1;
        } else {
            capitalize = 0;
        }
    }
    printf("Sentence case string:\n%s\n", str);
}

int main(){
    char str[100];
    printf("Enter a sentance: \n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("\n");
    printf("The actual string is: \n%s\n", str);
    sentence_case(str);
    return 0;

}
