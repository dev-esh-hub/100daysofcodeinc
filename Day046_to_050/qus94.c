// Q94: Find the longest word in a sentence.

#include<stdio.h>
#include<string.h>

int main(){
    char sentence[100];
    printf("Enter a sentence: \n");
    fgets(sentence, sizeof(sentence), stdin);
    int longestwrdlen=0, currwrdlen=0;
    int i, currwrdstart=0, longestwrdstart=0;
    for(int i=0; sentence[i]!='\0'; i+=1){
        if (sentence[i]!=' ' && sentence[i]!='\n'){
            if (currwrdlen==0) 
                currwrdstart = i;
            currwrdlen+=1;
        }
        else {
            if (currwrdlen>longestwrdlen){
                longestwrdlen = currwrdlen;
                longestwrdstart = currwrdstart;
            }
            currwrdlen = 0;
        }
    }
    if (currwrdlen > longestwrdlen){
        longestwrdlen = currwrdlen;
        longestwrdstart = currwrdstart;
    }
    printf("Longest word is: \n");
    for(int i=longestwrdstart; i<longestwrdstart+longestwrdlen; i+=1){
        printf("%c", sentence[i]);
    }
    printf("\n");
    printf("Length of longest word is: %d\n", longestwrdlen);
    return 0;
}