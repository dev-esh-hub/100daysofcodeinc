// Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include<stdio.h>
#include<string.h>

int main(){
    FILE *fptr;
    char input_file[20], ch;
    int vow=0, con=0;
    printf("Enter the name of file to read: ");
    fgets(input_file, sizeof(input_file), stdin);
    input_file[strcspn(input_file, "\n")] = '\0';
    fptr = fopen(input_file, "r");
    if(fptr == NULL){
        printf("%s file doesn't exists!\n", input_file);
        return 1;
    }
    while((ch=fgetc(fptr))!=EOF){
        if ((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z')){
            if ( ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U' ){
                vow+=1;
            }
            else con+=1;
        }
    }
    printf("Total number of vowels = %d and consonants = %d in %s file!\n", vow, con, input_file);
    fclose(fptr);
    return 0;
}