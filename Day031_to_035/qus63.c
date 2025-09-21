// Q63: Merge two arrays.

#include<stdio.h>

int main(){
    int n1, n2;
    printf("Enter number of elements you want to enter in first array: \n");
    scanf("%d", &n1);
    printf("Enter number of elements you want to enter in second array: \n");
    scanf("%d", &n2);
    int a[n1], b[n2], c[n1+n2];
    if(n1>0 && n2>0){
        printf("Enter %d elementys in first array: \n", n1);
        for(int i=0; i<n1; i+=1){
            scanf("%d", &a[i]);
        }
        printf("Enter %d elementys in second array: \n", n2);
        for(int j=0; j<n2; j+=1){
            scanf("%d", &b[j]);
        }
        // Merge logic:
        for(int i=0; i<n1; i+=1){
            c[i] = a[i];
        }
        for(int j=0; j<n2; j+=1){
            c[n1+j] = b[j];
        }
        printf("Merged array: \n");
        for(int k=0; k<n1+n2; k+=1){
            printf("%d ", c[k]);
        }
    }
    return 0;
}
