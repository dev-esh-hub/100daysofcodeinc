// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf().
//  Then read them using fscanf() and display each record.

#include<stdio.h>
#include<string.h>

struct students{
    char name[50];
    int roll, marks;
};

int main(){
    FILE *fptr;
    int n;
    printf("How many students record you want to enter: ");
    scanf("%d", &n);
    struct students stu[n];
    fptr = fopen("students.txt", "w");
    if (fptr == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }
    getchar();
    printf("Enter for students records:\n");
    for(int i=0; i<n; i+=1){
        printf("For student number %d:\n", i+1);
        printf("Enter Name: ");
        fgets(stu[i].name, sizeof(stu[i].name), stdin);
        stu[i].name[strcspn(stu[i].name, "\n")] = '\0';
        printf("Enter Roll number: ");
        scanf("%d", &stu[i].roll);
        printf("Enter Marks: ");
        scanf("%d", &stu[i].marks);
        getchar();
        fprintf(fptr, "%s %d %d\n", stu[i].name, stu[i].roll, stu[i].marks);
        printf("\n");
    }
    fclose(fptr);
    fptr = fopen("students.txt", "r");
    if (fptr == NULL) {
        printf("File could not be opened for reading.\n");
        return 1;
    }
    printf("Stored Students Records: \n");
    while(fscanf(fptr, "%s %d %d", stu[0].name, &stu[0].roll, &stu[0].marks)!=EOF){
        printf("Name: %s | Roll: %d | Marks: %d\n", stu[0].name, stu[0].roll, stu[0].marks);
    }
    fclose(fptr);
    return 0;
}