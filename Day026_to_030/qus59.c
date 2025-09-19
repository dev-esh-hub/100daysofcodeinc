// Q59: Count even and odd numbers in an array.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements you want to enter in the array: \n");
    scanf("%d", &n);
    int a[n], i, j, even=0 , odd=0;
    if(n>0){
        printf("Enter %d elements : \n", n);
        for (i = 0; i<=n-1; i+=1){
            scanf ("%d", &a[i]);
        }
        for (j = 0; j<=n-1; j+=1){
            if (a[j]%2==0)
                even +=1;
            else 
                odd+=1;
        }
        printf("Number of even elements in array are %d and number of odd elements in array are %d", even, odd);
    }
    else 
        printf("Elements can't be negative or zero!");
    return 0;
}
