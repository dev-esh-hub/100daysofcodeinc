// Q61: Search for an element in an array using linear search.
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements you want to enter in the array: \n");
    scanf("%d", &n);
    int a[n], flag, found=0;
    if(n>0){
        printf("Enter %d elements: \n", n);
        for(int i=0; i<n; i+=1){
            scanf("%d", &a[i]);
        }
        printf("Enter the element you want to search in the array: \n");
        scanf("%d", &flag);
        for(int j=0; j<n; j+=1){
            if(a[j]==flag){
                printf("%d found at index %d\n", flag, j+1);
                found += 1;
            }
        }
        if(found==0){
            printf("-1\n");
        }
    }else{
        printf("Number of elements can't be negative or zero!\n");
    }
    return 0;
}
