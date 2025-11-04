// Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). 
// After writing, display a message confirming that the data was successfully saved.

#include<stdio.h>

int main(){
    FILE *fptr;
    char name[50];
    int age;
    fptr = fopen("info.txt", "w");
    if(fptr==NULL){
        printf("Some error occurred!\n");
        return 1;
    }
    printf("Enter your name:  ");
    gets(name);
    printf("Enter your age:  ");
    scanf("%d", &age);
    fprintf(fptr, "Your information is as follows:\n");
    fprintf(fptr, "Name: %s \nAge: %d", name, age);
    printf("File created successfully! Data written to info.txt\n");
    fclose(fptr);
    return 0;
}