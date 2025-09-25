// Q71: Read and print a matrix.

#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the number of rows and columns to make matrix: \n");
    scanf("%d %d", &a, &b);
    int MAT[a][b];
    if(a>0 && b>0){
        for(int i=0; i<a; i+=1){
            for(int j=0; j<b; j+=1){
                printf("Enter (%d,%d) element:  ", i,j);
                scanf("%d", &MAT[i][j]);
            }
        }
        // To print the matrix:
        printf("The required matrix is: \n");
        for(int i=0; i<a; i+=1){
            for(int j=0; j<b; j+=1){
                printf("%d\t", MAT[i][j]);
            }
            printf("\n");
            printf("\v");
        }
    }
    else 
        printf("Order of matrix can't be negative or zero!");
    return 0;
}
