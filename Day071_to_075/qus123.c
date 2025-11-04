// Q123: Read a text file and count the total number of characters, words, and lines. 
// A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include<stdio.h>
#include<string.h>

int main(){
    FILE *fptr;
    char ch, word[100], line[100], file[50];
    int count_ch=0, count_words=0, count_lines=0;
    printf("Enter file to perform operation: ");
    fgets(file, sizeof(file), stdin);
    file[strcspn(file, "\n")] = '\0';
    fptr = fopen(file, "r");
    if(fptr == NULL){
        printf("File doesn't exist!\n");
        return 1;
    }
    while((ch = fgetc(fptr)) != EOF){
        count_ch+=1;
    }
    rewind(fptr);
    while((fscanf(fptr, "%s", word)) != EOF){
        count_words+=1;
    }
    rewind(fptr);
    while((fgets(line,100,fptr)) != NULL){
        count_lines+=1;
    }
    printf("Number of: \nCharacters = %d \nWords = %d \nLines = %d \n", count_ch, count_words, count_lines);
    fclose(fptr);
    return 0;
}