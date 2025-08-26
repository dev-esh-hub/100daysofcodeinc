// Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>

int main(){
    float radius, area, circumference;

    printf("Enter radius to find circumference and area: ");
    scanf("%f", &radius);

    circumference = 2*3.14*radius;
    area = 3.14*radius*radius;

    printf("Circumference of the circle with radius %.2f is = %.2f", radius, circumference );
    printf("\n");
    printf("Area of the circle with radius %.2f is = %.2f", radius, area );
    printf("\n");
    
    return 0;
}