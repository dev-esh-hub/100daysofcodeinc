// Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c, x, y;
    float D;
    printf("Enter the value of a, b, c respectively for quadratic equation ax^2 + bx + c : \n");
    scanf("%d, %d, %d", &a, &b, &c);

    D = ((b*b) - (4*a*c));

    if (D >= 0)
        {
        x = (-b + pow(D,0.5))/2*a;
        y = (-b - pow(D,0.5))/2*a;
        if (x == y)
            printf("Roots are real and same : %d ", x);
        else 
            printf("Roots are real and different : %d, %d", x, y);
        }
    else 
        printf("Roots are complex!");
    return 0;
}
