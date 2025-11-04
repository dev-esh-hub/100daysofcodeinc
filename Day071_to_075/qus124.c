// Q124: Take two filenames from the user – a source file and a destination file. 
// Copy all the content from the source file to the destination file using fgetc() and fputc().

#include<stdio.h>
#include<string.h>

int main(){
    char source_file[50], destination_file[50], copy;
    printf("Enter the source file: ");
    fgets(source_file, sizeof(source_file), stdin);
    source_file[strcspn(source_file, "\n")] = '\0';
    printf("Enter the destination file: ");
    fgets(destination_file, sizeof(destination_file), stdin);
    destination_file[strcspn(destination_file, "\n")] = '\0';
    FILE *f1ptr, *f2ptr;
    f1ptr = fopen(source_file, "r");
    f2ptr = fopen(destination_file, "w");
    if(f1ptr == NULL){
        printf("%s file doesn't exist!\n", source_file);
        return 1;
    }
    if(f2ptr == NULL){
        printf("Some error occured!\n", destination_file);
        return 1;
    }
    while((copy = fgetc(f1ptr)) != EOF){
        putc(copy, f2ptr);
    }
    printf("All content copied from %s file to %s file!\n", source_file, destination_file);
    fclose(f1ptr);
    fclose(f2ptr);
    return 0;
}