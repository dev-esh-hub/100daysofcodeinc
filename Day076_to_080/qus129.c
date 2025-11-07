// Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include<stdio.h>
#include<string.h>

int main(){
    FILE *fptr;
    char input_file[20];
    float num, sum=0, avg;
    int count;
    printf("Enter the file name: ");
    fgets(input_file, sizeof(input_file), stdin);
    input_file[strcspn(input_file, "\n")] = '\0';
    fptr = fopen(input_file, "r");
    if (fptr == NULL){
        printf("%s file doesn't exists!\n", input_file);
        return 1;
    }
    while(fscanf(fptr, "%f", &num)==1){
        sum += num;
        count+=1;
    }
    if(count==0){
        printf("No numbers found in file!\n");
    }
    else {
        avg = sum/count;
        printf("Sum = %.2f \nAverage = %.2f \n", sum, avg);
    }
    return 0;
}