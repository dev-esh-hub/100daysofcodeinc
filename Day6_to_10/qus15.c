// Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include<stdio.h>
#include<ctype.h>

int main(){
    char x;

    printf("Enter a character to check is upper case or lower case or digit or special character: \n");
    scanf("%c", &x);

    if (isupper(x))
        printf("%c is an upper case character!\n", x);
    else if (islower(x))
        printf("%c is a lower case character!\n", x);
    else if (isdigit(x))
        printf("%c is a digit!\n", x);
    else if (ispunct(x))
        printf("%c is a special character!\n", x);
    else 
        printf("Kuch accha ho jae kuch meetha ho jae!\n");

    return 0;
}