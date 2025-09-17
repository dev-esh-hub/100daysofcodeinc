// Q56: Read and print elements of a one-dimensional array.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the length of array: \n");
    scanf("%d", &n);
    int a[n];
    // To make an arrray or to take input.
    for (int i = 0; i<=n-1; i+=1){
        switch (i){
            case 0:{
                printf("Enter %dst number you want to add in array: \n", i+1);
                scanf("%d", &a[i]);
                break;
            }
            case 1:{
                printf("Enter %dnd number you want to add in array: \n", i+1);
                scanf("%d", &a[i]);
                break;
            }
            case 2:{
                printf("Enter %drd number you want to add in array: \n", i+1);
                scanf("%d", &a[i]);
                break;
            }
            default:{
                printf("Enter %dth number you want to add in array: \n", i+1);
                scanf("%d", &a[i]);
                break;
            }
        }
    }
    // To display elements of array.
    printf("The array elements are: \n");
    for (int j = 0; j<=n-1; j+=1){
        printf("%d\t", a[j]);
    }
    return 0;
}
