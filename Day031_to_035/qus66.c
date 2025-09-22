// Q66: Insert an element in a sorted array at the appropriate position.
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements you want to enter in the array: \n");
    scanf("%d", &n);
    int a[n];
    if(n>0){
        printf("Enter %d elements: \n", n);
        for(int i=0; i<n; i+=1){
            scanf("%d", &a[i]);
        }
        // To sort array:
        for(int i=0; i<n-1; i+=1){
            for(int j=i+1; j<=n-1; j+=1){
                if(a[i]>a[j]){
                    a[i]=a[i]+a[j];
                    a[j]=a[i]-a[j];
                    a[i]=a[i]-a[j];
                }
            }
        }
        printf("\nSorted array: \n");
        for(int i=0; i<n; i+=1){
            printf("%d ", a[i]);
        }
        // To insert element at appropriate position:
        int key;
        int b[n+1];
        for(int i=0; i<n; i+=1){
            b[i] = a[i];
        }
        printf("\nEnter the element you want to enter in the array: \n");
        scanf("%d", &key);
        int index=0;;
        while(index<n+1 && b[index]<key){
            index+=1;
        }
        int i=n;
        while(i>=index){
            b[i]=b[i-1];
            i-=1;         
        }
        b[index]=key;
        printf("Array after insertion is: \n");
        for(int i=0; i<=n; i+=1){
            printf("%d ", b[i]);
        }
    }
    return 0;
}
