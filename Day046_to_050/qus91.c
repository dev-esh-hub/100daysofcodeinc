// Q91: Remove all vowels from a string.

#include<stdio.h>
#include<string.h>

int main(){
    char a[50];
    printf("Enter the string: \n");
    gets(a);
    int index = strlen(a);
    for(int i=0; a[i]!='\0'; i+=1){
        if ((a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')){
            int j=i+1;
            while(j<=index){
                a[j-1]=a[j];
                j+=1;
            }
            i-=1;
            index-=1;
        }
    }
    printf("The updated string after removal of all vowels is: \n%s", a);
    return 0;
}