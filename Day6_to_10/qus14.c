// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include<stdio.h>

int main(){
    char alpha;
    printf("Enter the alphabet you want to check wheather vowel or consonent: \n");
    scanf("%c", &alpha);

    if (alpha == 'a'|| alpha == 'e'|| alpha =='i'|| alpha == 'o'|| alpha == 'u'|| alpha == 'A'|| alpha == 'E'|| alpha == 'I'|| alpha == 'O'|| alpha == 'U')
        printf("%c is a vowel!!!\n", alpha);
    else 
        printf("%c is a consonent!!!\n", alpha);
    return 0;
}