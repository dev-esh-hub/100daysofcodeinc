// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>

int main(){
    float celc, ferh;

    printf("Enter temperature in celcius to change to ferinheit: ");
    scanf("%f", &celc);

    ferh = (celc*9/5)+32;

    printf("Fehrenheit temperature of %.2f is = %.2f ", celc, ferh);
    
    return 0;
}
