// Q95: Check if one string is a rotation of another.

#include<stdio.h>
#include<string.h>

int main(){
    char a[50], b[50];
    printf("Enter first string: \n");
    fgets(a, sizeof(a), stdin);
    printf("Enter second string: \n");
    fgets(b, sizeof(b), stdin);
    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';
    // To check for rotational string:
    // First let us conatinate the string 'a' to string 'a' itself:
    char alta[100];
    strcpy(alta,a);
    strcat(alta,a);
    int  flag=0;
    if (strlen(a)==strlen(b)){
        for (int i = 0; i <= strlen(alta) - strlen(b); i++) {
            int j = 0;
            while (j < strlen(b) && alta[i + j] == b[j])
                j++;
            if (j == strlen(b)) {
                flag=1;
                break;
            }
}
        if (flag==1){
            printf("The strings are rotational!");
        }
        else 
            printf("The strings are not roational!");
    }else 
        printf("The strings are not rotational!");
    return 0;
}