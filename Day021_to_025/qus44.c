// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include<stdio.h>
float series(int n){
    float sum = 1;
    
    for(int i = 3; i<=(n*2)-1 ; i+=2){
        sum = sum + (float)i/(i+1);
    }
    return sum;
}
int main(){
    int n;

    printf("Enter the term upto which you want sum of series: \n");
    scanf("%d", &n);

    if (n==1){
        printf("The sum of series is  1");
    }else{
        float result = series(n);
        printf("The sum of series is %.1f", result);
    }
    return 0;
}
