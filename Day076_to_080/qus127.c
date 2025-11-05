// Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    FILE *f1ptr, *f2ptr;
    char input_file[50], output_file[50], ch;
    printf("Enter the input file name: ");
    fgets(input_file, sizeof(input_file), stdin);
    input_file[strcspn(input_file, "\n")] = '\0';
    f1ptr = fopen(input_file, "r");
    if(f1ptr == NULL){
        printf("%s file does not exist!\n", input_file);
        return 1;
    }
    printf("Enter the output file name: ");
    fgets(output_file, sizeof(output_file), stdin);
    output_file[strcspn(output_file, "\n")] = '\0';
    f2ptr = fopen(output_file,"w");
    while((ch = fgetc(f1ptr))!=EOF){
        if(isalpha(ch)){
            if(islower(ch)){
                ch = toupper(ch);
            }
        }
        fputc(ch, f2ptr);
    }
    printf("Result updated into %s file!\n", output_file);
    fclose(f1ptr);
    fclose(f2ptr);
    return 0;
}

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/