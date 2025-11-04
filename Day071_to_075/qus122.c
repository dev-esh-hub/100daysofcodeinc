// Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). 
// The program should print all the lines to the console until EOF (end of file) is reached.

#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("info.txt", "r");
    char temp[100];
    if (fptr == NULL) {
        printf("File not found.\n");
        return 1;
    }
    while((fgets(temp,100,fptr))!=NULL){
        printf("%s", temp);
    }
    printf("\nFile reading complete.\n");
    fclose(fptr);
    return 0;
}