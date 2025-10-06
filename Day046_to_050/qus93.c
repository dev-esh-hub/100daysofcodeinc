// Q93: Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

int main() {
    char a[50], b[50];
    int i;
    int freqA[26] = {0}, freqB[26] = {0};
    printf("Enter the first string:\n");
    gets(a); 
    printf("Enter the second string:\n");
    gets(b);
    if (strlen(a) != strlen(b)) {
        printf("The strings are NOT ANAGRAMS!\n");
        return 0;
    }
    // Count frequency of each character
    for (i = 0; a[i] != '\0'; i++) {
        freqA[a[i] - 'a']++;
        freqB[b[i] - 'a']++;
    }
    // Compare frequencies
    for (i = 0; i < 26; i++) {
        if (freqA[i] != freqB[i]) {
            printf("The strings are NOT ANAGRAMS!\n");
            return 0;
        }
    }
    printf("The strings ARE ANAGRAMS!\n");
    return 0;
}