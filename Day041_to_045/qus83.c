// Q83: Count vowels and consonants in a string.

#include<stdio.h>

int main(){
    char a[50];
    printf("Enter the string: \n");
    gets(a);
    int i=0, vow=0, cons=0;
    while(a[i]!='\0'){
        if ((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
            if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
                vow+=1;
            else 
                cons+=1;
        }
        i+=1;
    }
    printf("Total number of vowels in string are %d and consonants in string are %d", vow, cons);
    return 0;
}