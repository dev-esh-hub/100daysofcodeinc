// Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). 
// The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. 
// Print "Anagram" if they are, otherwise "Not Anagram".

#include<stdio.h>
#include<string.h>

void anagram_check(char s[100], char t[100]){
    int freq1[26]={0}, freq2[26]={0};
    // To count frequency of characters in s and t and storing in different arrays:
    // I have also treated upper and lower case same:
    for(int i=0; i<strlen(s); i+=1){
        if(s[i]>='a' && s[i]<='z')
            freq1[s[i]-'a']+=1;
        else if(s[i]>='A' && s[i]<='Z')
            freq1[s[i]-'A']+=1;
    }
    for(int i=0; i<strlen(t); i+=1){
        if(t[i]>='a' && t[i]<='z')
            freq2[t[i]-'a']+=1;
        else if(t[i]>='A' && t[i]<='Z')
            freq2[t[i]-'A']+=1;
    }
    //To compare between freq1 and freq2 arrays:
    int flag=1;
    for(int i=0; i<26; i+=1){
        if(freq1[i]!=freq2[i]){
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("Yes, '%s' and '%s' are anagrams!\n", s, t);
    else
        printf("No, '%s' and '%s' are not anagrams!\n", s, t);
}

int main(){
    char s[100], t[100];
    printf("Enter first string: \n");
    fgets(s, sizeof(s), stdin);
    printf("Enter second string: \n");
    fgets(t, sizeof(t), stdin);
    s[strcspn(s, "\n")] = '\0';
    t[strcspn(t, "\n")] = '\0';
    anagram_check(s, t);
    return 0;
}