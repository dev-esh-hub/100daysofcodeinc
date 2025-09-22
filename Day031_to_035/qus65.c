// Q65: Search in a sorted array using binary search.
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
        // To search in sorted array using bubble sort:
        int key, flag=0, pos;
        printf("\nEnter the number to search: \n");
        scanf("%d", &key);
        int i=0, j=n-1;
        while(i<=j){
            int mid = (i+j)/2;
            if(a[mid]==key){
                flag = 1;
                pos = mid+1;
                break;
            }
            else if(a[mid]>key){
                j = mid-1;
            }
            else if(a[mid]<key){
                i = mid+1;
            }
        }
        if(flag==1){
            printf("%d found at %d position!", key, pos);
        }
        else
            printf("-1");
    }
    else    
        printf("Number of elements can't be negative or zero!");
    return 0;
}
