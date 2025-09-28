// Q78: Find the sum of main diagonal elements for a square matrix.

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
            int sum=0;
            for(int i=0; i<a; i+=1){
                for(int j=0; j<b; j+=1){
                    if (i==j){
                        sum += MAT[i][j];
                    }
                }
            }
            printf("Sum of main diagonal element of matrix is : %d", sum);
        }
        else 
            printf("Diagonal elements can be accessed only of square matrix!\n");
    }
    else 
        printf("Number of rows and columns can't ne negative or zero!\n");
    return 0;
}