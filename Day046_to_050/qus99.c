// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include<string.h>

int main(){
    char date[50];
    char day[3], year[5], month[3];
    printf("Enter date (in dd/mm/yyyy format): \n");
    fgets(date, sizeof(date), stdin);
    strncpy(day, date, 2);
    day[2]='\0';
    strncpy(year, date+6, 4);
    year[4]='\0';
    strncpy(month, date+3, 2);
    month[2]='\0';
    printf("The new format date is: \n");
    if(strcmp(month, "01\0")==0)
        printf("%s-Jan-%s\n", day, year);
    else if(strcmp(month, "02\0")==0)
        printf("%s-Feb-%s\n", day, year);
    else if(strcmp(month, "03\0")==0)
        printf("%s-Mar-%s\n", day, year);
    else if(strcmp(month, "04\0")==0)
        printf("%s-Apr-%s\n", day, year);
    else if(strcmp(month, "05\0")==0)
        printf("%s-May-%s\n", day, year);
    else if(strcmp(month, "06\0")==0)
        printf("%s-Jun-%s\n", day, year);
    else if(strcmp(month, "07\0")==0)
        printf("%s-Jul-%s\n", day, year);
    else if(strcmp(month, "08\0")==0)
        printf("%s-Aug-%s\n", day, year);
    else if(strcmp(month, "09\0")==0)
        printf("%s-Sep-%s\n", day, year);
    else if(strcmp(month, "10\0")==0)
        printf("%s-Oct-%s\n", day, year);
    else if(strcmp(month, "11\0")==0)
        printf("%s-Nov-%s\n", day, year);
    else if(strcmp(month, "12\0")==0)
        printf("%s-Dec-%s\n", day, year);
    else 
        printf("Invalid date!");
    return 0;
}