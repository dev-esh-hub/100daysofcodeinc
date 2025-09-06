// Q33: Write a program to check if a number is an Armstrong number.
#include<stdio.h>
#include<math.h>

int main(){
    int n, rem;
    double sum;
    printf("Enter the number to check armstrong: \n");
    scanf("%d", &n);
    int i = n, altn = n;
    int arm = 0, cnt = 0; 
    if (n>0){
        while (i>0){
            cnt = cnt + 1;
            i = i / 10;
        }
        printf("Number of digits in %d is %d\n", n, cnt);
        while (altn > 0){
            rem = altn % 10;
            sum = pow (rem,cnt);
            arm += sum;
            altn /= 10;
        }
        arm == n ? printf("%d is an armstrong number!", n) : printf("%d is not an armstrong number!", n);
    } else 
        printf("Enter positive number !");
    return 0;
}
