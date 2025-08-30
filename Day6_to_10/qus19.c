// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>

int main(){
    int a, b, c;

    printf("Enter first side of triangle: \n");
    scanf("%d", &a);
    printf("Enter second side of triangle: \n");
    scanf("%d", &b);
    printf("Enter third side of triangle: \n");
    scanf("%d", &c);

    if (a+b>c && a+c>b && b+c>a)
        if (a==b && a==c && b==c)
            printf("Triangle is equilateral triangle!");
        else if (a==b || b==c || a==c)
            printf("Triangle is isosceles triangle!");
        else 
            printf("Triangle is scalan triangle!");
    else   
        printf("Not Valid Triangle!");

    return 0;
}
