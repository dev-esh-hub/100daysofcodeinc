// Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. 
// If the file pointer is NULL, print an error message; otherwise, read and display its content.

#include<stdio.h>
#include<string.h>

int main(){
    FILE *fptr;
    char file_name[50], line[500];
    printf("Enter the file name: ");
    fgets(file_name, sizeof(file_name), stdin);
    file_name[strcspn(file_name, "\n")] = '\0';
    fptr = fopen(file_name, "r");
    if(fptr == NULL){
        printf("File does not exist!\n");
        return 1;
    }
    printf("File opened successfully!\n");
    // To read file and :
    while((fgets(line,sizeof(line),fptr)) != NULL){
        printf("%s", line);
    }
    fclose(fptr);
    return 0;
}