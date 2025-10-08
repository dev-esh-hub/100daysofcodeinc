// Q96: Reverse each word in a sentence without changing the word order.

#include<stdio.h>

int main(){
    char sentence[50];
    printf("Enter a sentence: \n");
    fgets(sentence, sizeof(sentence), stdin);
    int start=0, i=0;
    while(sentence[i]!='\0'){
        if (sentence[i]==' ' || sentence[i]=='\n'){
            // Reverse the word from start to i-1:
            int left = start;
            int right = i-1;
            while(left<right){
                char alt = sentence[left];
                sentence[left] = sentence[right];
                sentence[right] = alt;
                left+=1;
                right-=1;
            }
            start = i+1; // Move to next word!
        }
        i+=1;
    }
    printf("String with each words reversed is: \n%s", sentence);
    return 0;
}