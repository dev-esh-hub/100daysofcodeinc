// Q125: Open an existing file in append mode and allow the user to enter a new line of text. 
// Append the text at the end without overwriting existing content.

#include<stdio.h>
#include <string.h>

int main(){
    FILE *fptr;
    char file_name[50], sentence[200];
    printf("Enter the file name to append: ");
    fgets(file_name, sizeof(file_name), stdin);
    file_name[strcspn(file_name, "\n")] = '\0';
    // Check if file exists
    fptr = fopen(file_name, "r");
    if (fptr == NULL) {
        printf("File does not exist. It will be created and then appended.\n");
    } else {
        printf("File exists. Appending now...\n");
        fclose(fptr);
    }
    // Open file in append mode
    fptr = fopen(file_name, "a");
    if(fptr == NULL){
        printf("Some error occurred!\n");
        return 1;
    }
    printf("Enter the text to append:\n");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';
    fputs("\n", fptr); // To append from next line.
    fputs(sentence, fptr);
    fputs("\n", fptr);
    fclose(fptr);
    printf("File updated successfully with appended text!\n");
    return 0;
}