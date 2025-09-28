// Q77: Check if the elements on the diagonal of a matrix are distinct.

#include<stdio.h>

int main(){
    int a,b;
    printf("Enter number of rows and columns of matrix: \n");
    scanf("%d %d", &a, &b);
    if(a>0 && b>0){
        if (a==b){ // Diagonal element can be accessed only of square matrix
            int MAT[a][b];
            for(int i=0; i<a; i+=1){
                for(int j=0; j<b; j+=1){
                    printf("Enter (%d,%d) element: ", i, j);
                    scanf("%d", &MAT[i][j]);
                }
            }
            printf("\n");
            // To print the matrix:
            printf("The required matrix is: \n\n");
            for(int i=0; i<a; i+=1){
                for(int j=0; j<b; j+=1){
                    printf("%d\t", MAT[i][j]);
                }
                printf("\n");
                printf("\v");
            }
            // To check the diagonal matrix:
            int arr[a];
            for(int i=0; i<a; i++){
                arr[i] = MAT[i][i];
            }
            int flag = 0;
            for(int i=0; i<a-1; i+=1){
                for(int j=i+1; j<a; j+=1){
                    if (arr[i] == arr[j]){
                        flag=1; 
                        break;
                    }
                }
            }
            if (flag == 1)
                printf("Diagonal elements Distinct : False");
            else 
                printf("Diagonal elements Distinct : True\n");
        }
        else 
            printf("Diagonal elements can be accessed only of square matrix! so please enter a square matrix!");
    }
    else 
        printf("Number of rows and columns can't be negative or zero!");
    return 0;
}