// Q114: Write a program to take a string s as input.
// The task is to find the length of the longest substring without repeating characters.
//  Print the length as output.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int lgst_substring(char s[100]){
    int maxLen = 0;
    int start = 0;
    int lastIndex[256]; // There are 256 ASCII characters
    // Initialize all characters as not seen
    for(int i = 0; i < 256; i+=1){
        lastIndex[i] = -1;
    }
    for(int i = 0; s[i] != '\0'; i+=1){
        // Remove newline if present
        if(s[i] == '\n') 
            break;
        // If character was seen before and is inside current window
        if(lastIndex[(unsigned char)s[i]] >= start){
            start = lastIndex[(unsigned char)s[i]] + 1;
        }
        lastIndex[(unsigned char)s[i]] = i;
        int currLen = i - start + 1;
        if(currLen > maxLen){
            maxLen = currLen;
        }
    }
    return maxLen;
}

int main(){
    char s[100];
    printf("Enter a string: \n");
    fgets(s, sizeof(s), stdin);
    int result = lgst_substring(s);
    printf("The length of longest substring without repetition is: %d", result);
    return 0;
}