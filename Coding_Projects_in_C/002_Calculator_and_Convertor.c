/*
Project Title:
Calculator and Unit Converter Program in C

Objective:
A C program that performs basic arithmetic operations and converts values between different units using a menu-driven system.

Program Requirements

Part A: Calculator

This program will perform the following operations:
Addition
Subtraction
Multiplication
Division
Modulus
Exponential
Factorial
Trigonometry
Logarithm

Part B: Unit Converter

Category	                Conversions

Temperature	                Celsius ↔ Fahrenheit ↔ Kelvin
Time	                    Seconds ↔ Minutes ↔ Hours
Currency	                Rupees ↔ Dollars ↔ Euros
Angle                       Degree ↔ Radian

*/

#include<stdio.h>
#include<math.h>

void addition(){
    int n;
    printf("Enter how many numbers sum do you want:\n");
    scanf("%d", &n);
    float arr[n];
    printf("Enter %d numbers (space separated) to find sum of all numbers:\n", n);
    for(int i=0; i<n; i+=1){
        scanf("%f", &arr[i]);
    }
    float sum=0;
    for(int i=0; i<n; i+=1){
        sum+=arr[i];
    }
    printf("The sum of all numbers (round off to 2 decimal position) is: %.2f", sum);
}

void substraction(){
    float n1, n2, diff;
    printf("Enter the number from which you need to substract: \n");
    scanf("%f", &n1);
    printf("Enter the number which is to be substracted: \n");
    scanf("%f", &n2);
    diff = n1 - n2;
    printf("The result after substracting %.2f from %.2f is %.2f\n", n1, n2, diff);
}

void multiplication(){
    int n;
    printf("Enter how many numbers you want to find product of: \n");
    scanf("%d", &n);
    float arr[n];
    printf("Enter %d numbers (space separated) to find product of all numbers:\n", n);
    for(int i=0; i<n; i+=1){
        scanf("%f", &arr[i]);
    }
    float product=1.00;
    for(int i=0; i<n; i+=1){
        product*=arr[i];
    }
    printf("The product of all numbers (round off to 2 decimal position) is: %.2f", product);
}

void division(){
    float n1, n2, div;
    printf("Enter the dividend (number you need to divide): \n");
    scanf("%f", &n1);
    xyz1: {
        printf("Enter the divisor (number by which you need to divide): \n");
        scanf("%f", &n2);
        if (n2!=0){
            div = n1 / n2;
            printf("The result after dividing %.2f from %.2f is %.2f\n", n1, n2, div);
        }
        else{ 
            printf("The divisor can't be negative! Enter the divisor again!\n");
            goto xyz1;
        }
    }
}

void modulus(){
    float n1, n2, rem;
    printf("Enter the dividend (number you need to divide): \n");
    scanf("%f", &n1);
    xyz2: {
        printf("Enter the divisor (number by which you need to divide): \n");
        scanf("%f", &n2);
        if (n2!=0){
            rem = fmod(n1, n2);
            printf("The remainder or modulus after dividing %.2f from %.2f is %.2f\n", n1, n2, rem);
        }
        else{ 
            printf("The divisor can't be negative! Enter the divisor again!\n");
            goto xyz2;
        }
    }
}

void exponent(){
    float n1, n2;
    double exp;
    printf("Enter the base (number whose power need to calculate): \n");
    scanf("%f", &n1);
    printf("Enter the exponent: \n");
    scanf("%f", &n2);
    exp = pow(n1,n2);
    printf("The result of %.2f^%.2f is %.2f", n1, n2, exp);
}

void factorial(){
    xyz3: {
        int n;
        printf("Enter any integer to find factorial: \n");
        scanf("%d", &n);
        int fact=1;
        if(n==0 || n==1)
            printf("The factorial of %d = 1\n", n);
        else if(n>0){
            for(int i=1; i<=n; i+=1){
                fact*=i;
            }
            printf("The factorial of %d = %d\n", n, fact);
        }
        else {
            printf("Wrong input! Enter only positive integer! Try again!\n");
            goto xyz3;
        }
    }  
}

void trigono(){ 
    double angle_deg, angle_rad, PI = 3.14159265;
    printf("Enter angle in degrees: ");
    scanf("%lf", &angle_deg);
    angle_rad = angle_deg * (PI / 180.0);
    double sine = sin(angle_rad);
    double cosine = cos(angle_rad);
    double tangent = tan(angle_rad);
    printf("sin(%.2lf°) = %.4lf\n", angle_deg, sine);
    printf("cos(%.2lf°) = %.4lf\n", angle_deg, cosine);
    if (fabs(cosine) < 1e-6)
        printf("tan(%.2lf°) is undefined!\n", angle_deg);
    else 
        printf("tan(%.2lf°) = %.4lf\n", angle_deg, tangent);
    if (fabs(sine) < 1e-6)
        printf("cosec(%.2lf°) is undefined!\n", angle_deg);
    else
        printf("cosec(%.2lf°) = %.4lf\n", angle_deg, 1.0 / sine);
    if (fabs(cosine) < 1e-6)
        printf("sec(%.2lf°) is undefined!\n", angle_deg);
    else
        printf("sec(%.2lf°) = %.4lf\n", angle_deg, 1.0 / cosine);
    if (fabs(tangent) < 1e-6)
        printf("cot(%.2lf°) is undefined!\n", angle_deg);
    else
        printf("cot(%.2lf°) = %.4lf\n", angle_deg, 1.0 / tangent);
}

void logarithm(){
    xyz4: {
        double n;
        printf("Enter any value (greater than 0) to find log value at base 10 and e: \n");
        scanf("%lf", &n);
        if (n>0){
            double log10_val = log10(n);
            double loge_val = log(n);
            printf("log base 10 of %.4lf = %.4lf\n", n, log10_val);
            printf("log base e   of %.4lf = %.4lf\n", n, loge_val);
        }
        else {
            printf("Log undefine for 0 or negative values! Please enter positive value! Try again!\n");
            goto xyz4;
        }
    }
}

void cel_to_fah(){
    float cel, fah;
    printf("Enter Temperature in Celsius: ");
    scanf("%f", &cel);
    fah = (cel * 9.0 / 5.0) + 32.0;
    printf("%.2f°C = %.2f°F", cel, fah);
}
void cel_to_kel(){
    float cel, kel;
    printf("Enter Temperature in Celsius: ");
    scanf("%f", &cel);
    kel = cel + 273.15;;
    printf("%.2f°C = %.2f Kel", cel, kel);
}
void fah_to_cel(){
    float cel, fah;
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f", &fah);
    cel = (fah - 32.0) * 5.0 / 9.0;
    printf("%.2f°F = %.2f°C", fah, cel);
}
void fah_to_kel(){
    float kel, fah;
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f", &fah);
    kel = ((fah - 32.0) * 5.0 / 9.0) + 273.15;
    printf("%.2f°F = %.2f Kel", fah, kel);
}
void kel_to_cel(){
    float cel, kel;
    printf("Enter Temperature in Kelvin: ");
    scanf("%f", &kel);
    cel = kel - 273.15;
    printf("%.2f Kel = %.2f°C", kel, cel);
}
void kel_to_fah(){
    float kel, fah;
    printf("Enter Temperature in Kelvin: ");
    scanf("%f", &kel);
    fah = (kel - 273.15) * 9.0 / 5.0 + 32.0;
    printf("%.2f kel = %.2f°F", kel, fah);
}

void sec_to_min(){
    xyz5:{
        float sec, min;
        printf("Enter time in seconds: ");
        scanf("%f", &sec);
        if(sec<0){
            printf("Time can't be negative! Please enter positive value! Try Again!\n");
            goto xyz5;
        }
    min = sec / 60.0;
    printf("%.2f sec = %.2f min", sec, min);
    }
}
void min_to_hour(){
    xyz6: {
        float hour, min;
        printf("Enter time in minutes: ");
        scanf("%f", &min);
        if(min<0){
            printf("Time can't be negative! Please enter positive value! Try Again!\n");
            goto xyz6;
        }
    hour = min / 60.0;
    printf("%.2f min = %.2f hour", min, hour);
    }
}
void sec_to_hour(){
    xyz7:{
        float hour, sec;
        printf("Enter time in seconds: ");
        scanf("%f", &sec);
        if(sec<0){
            printf("Time can't be negative! Please enter positive value! Try Again!\n");
            goto xyz7;
        }
    hour = sec / 3600.0;
    printf("%.2f sec = %.2f hour", sec, hour);
    }
}
void hour_to_min(){
    xyz8:{
        float hour, min;
        printf("Enter time in hour: ");
        scanf("%f", &hour);
        if(hour<0){
            printf("Time can't be negative! Please enter positive value! Try Again!\n");
            goto xyz8;
        }
    min = hour * 60.0;
    printf("%.2f hour = %.2f min", hour, min);
    }
}
void min_to_sec(){
    xyz9:{
        float sec, min;
        printf("Enter time in minutes: ");
        scanf("%f", &min);
        if(min<0){
            printf("Time can't be negative! Please enter positive value! Try Again!\n");
            goto xyz9;
        }
    sec = min * 60.0;
    printf("%.2f min = %.2f sec", min, sec);
    }
}
void hour_to_sec(){
    xyz10:{
        float sec, hour;
        printf("Enter time in hours: ");
        scanf("%f", &hour);
        if(hour<0){
            printf("Time can't be negative! Please enter positive value! Try Again!\n");
            goto xyz10;
        }
    sec = hour * 3600.0;
    printf("%.2f hour = %.2f sec", hour, sec);
    }
}

void rup_to_doll(){
    xyz11:{
        float rup, doll;
        printf("Enter amount in rupees(₹): ");
        scanf("%f", &rup);
        if(rup<0){
            printf("Amount can't be negative! Please enter positive value! Try Again!\n");
            goto xyz11;
        }
    doll = rup * 0.01126;
    printf("%.2f₹ = %.2f$", rup, doll);
    }
}
void rup_to_euro(){
    xyz12:{
        float rup, euro;
        printf("Enter amount in rupees(₹): ");
        scanf("%f", &rup);
        if(rup<0){
            printf("Amount can't be negative! Please enter positive value! Try Again!\n");
            goto xyz12;
        }
    euro = rup * 0.00976;
    printf("%.2f₹ = %.2f€", rup, euro);
    }
}
void doll_to_rup(){
    xyz13:{
        float rup, doll;
        printf("Enter amount in dollars($): ");
        scanf("%f", &doll);
        if(doll<0){
            printf("Amount can't be negative! Please enter positive value! Try Again!\n");
            goto xyz13;
        }
    rup = doll * 88.739;
    printf("%.2f$ = %.2f₹", doll, rup);
    }
}
void doll_to_euro(){
    xyz14:{
        float euro, doll;
        printf("Enter amount in dollars($): ");
        scanf("%f", &doll);
        if(doll<0){
            printf("Amount can't be negative! Please enter positive value! Try Again!\n");
            goto xyz14;
        }
    euro =  doll * 0.8668;
    printf("%.2f$ = %.2f€", doll, euro);
    }
}
void euro_to_rup(){
    xyz15:{
        float rup, euro;
        printf("Enter amount in euros(€): ");
        scanf("%f", &euro);
        if(euro<0){
            printf("Amount can't be negative! Please enter positive value! Try Again!\n");
            goto xyz15;
        }
    rup = euro * 102.352;
    printf("%.2f€ = %.2f₹", euro, rup);
    }
}
void euro_to_doll(){
    xyz16:{
        float euro, doll;
        printf("Enter amount in euros(€): ");
        scanf("%f", &euro);
        if(euro<0){
            printf("Amount can't be negative! Please enter positive value! Try Again!\n");
            goto xyz16;
        }
    doll = euro * 1.1534;
    printf("%.2f€ = %.2f$", euro, doll);
    }
}

void degree_to_rad(){
    double deg, rad, PI=3.14159265;
    printf("Enter angle in degree: ");
    scanf("%lf", &deg);
    rad = deg * (PI/180.0);
    printf("%.2lf° = %.4lf radians\n", deg, rad);
}
void rad_to_degree(){
    double deg, rad, PI=3.14159265;
    printf("Enter angle in radians: ");
    scanf("%lf", &rad);
    deg = rad * (180.0 / PI);
    printf("%.4lf radians = %.2lf°\n", rad, deg);
}

// ============================================================================================================================================================================================================================================================================================

int main() {
    int mainChoice, calcChoice, tempChoice, timeChoice, currChoice, angleChoice;
    int repeat = 1;

    while (repeat) {

        printf("\n================= MAIN MENU =================\n");
        printf("1 ---> Calculator\n");
        printf("2 ---> Unit Converter\n");
        printf("3 ---> Exit\n");
        printf("=============================================\n");
        printf("Enter your choice: ");
        scanf("%d", &mainChoice);

        switch (mainChoice) {

        case 1: // Calculator
            while (1) {
                printf("\n----------- Calculator Menu -----------\n");
                printf("1 ---> Addition\n");
                printf("2 ---> Subtraction\n");
                printf("3 ---> Multiplication\n");
                printf("4 ---> Division\n");
                printf("5 ---> Modulus\n");
                printf("6 ---> Exponential\n");
                printf("7 ---> Factorial\n");
                printf("8 ---> Trigonometry\n");
                printf("9 ---> Logarithm\n");
                printf("10 ---> Back to Main Menu\n");
                printf("--------------------------------------\n");

                while (1) { // Input loop
                    printf("Enter choice: ");
                    scanf("%d", &calcChoice);

                    if  (calcChoice == 1) { 
                        addition(); 
                        break; 
                    }
                    else if (calcChoice == 2) { 
                        substraction(); 
                        break; 
                    }
                    else if (calcChoice == 3) { 
                        multiplication(); 
                        break; 
                    }
                    else if (calcChoice == 4) { 
                        division(); 
                        break; 
                    }
                    else if (calcChoice == 5) { 
                        modulus(); 
                        break; 
                    }
                    else if (calcChoice == 6) { 
                        exponent(); 
                        break; 
                    }
                    else if (calcChoice == 7) { 
                        factorial(); 
                        break; 
                    }
                    else if (calcChoice == 8) { 
                        trigono(); 
                        break; 
                    }
                    else if (calcChoice == 9) { 
                        logarithm(); 
                        break; 
                    }
                    else if (calcChoice == 10) goto exit_calc;
                    else printf("Invalid choice! Try again!\n");
                }
            }
            exit_calc:
            break;

        case 2: // Unit Converter
            while (1) {
                printf("\n------------- Unit Converter ------------\n");
                printf("1 ---> Temperature\n");
                printf("2 ---> Time\n");
                printf("3 ---> Currency\n");
                printf("4 ---> Angle\n");
                printf("5 ---> Back to Main Menu\n");
                printf("----------------------------------------\n");

                printf("Enter choice: ");
                scanf("%d", &calcChoice);

                if (calcChoice == 1) {

                    while (1) {
                        printf("\nTemperature Conversion:\n");
                        printf("1 ---> Celsius -> Fahrenheit\n");
                        printf("2 ---> Celsius -> Kelvin\n");
                        printf("3 ---> Fahrenheit -> Celsius\n");
                        printf("4 ---> Fahrenheit -> Kelvin\n");
                        printf("5 ---> Kelvin -> Celsius\n");
                        printf("6 ---> Kelvin -> Fahrenheit\n");
                        printf("7 ---> Back\n");
                        printf("Enter: ");
                        scanf("%d", &tempChoice);

                        if (tempChoice == 1) { 
                            cel_to_fah(); 
                            break; 
                        }
                        else if (tempChoice == 2) { 
                            cel_to_kel(); 
                            break; 
                        }
                        else if (tempChoice == 3) { 
                            fah_to_cel(); 
                            break; 
                        }
                        else if (tempChoice == 4) { 
                            fah_to_kel(); 
                            break; 
                        }
                        else if (tempChoice == 5) { 
                            kel_to_cel(); 
                            break; 
                        }
                        else if (tempChoice == 6) { 
                            kel_to_fah(); 
                            break; 
                        }
                        else if (tempChoice == 7) break;
                        else printf("Invalid! Try again!\n");
                    }
                
                }
                else if (calcChoice == 2) {

                    while (1) {
                        printf("\nTime Conversion:\n");
                        printf("1 ---> Sec -> Min\n");
                        printf("2 ---> Min -> Hour\n");
                        printf("3 ---> Sec -> Hour\n");
                        printf("4 ---> Hour -> Min\n");
                        printf("5 ---> Min -> Sec\n");
                        printf("6 ---> Hour -> Sec\n");
                        printf("7 ---> Back\n");
                        printf("Enter: ");
                        scanf("%d", &timeChoice);

                        if (timeChoice == 1) { 
                            sec_to_min(); 
                            break; }
                        else if (timeChoice == 2) { 
                            min_to_hour(); 
                            break; 
                        }
                        else if (timeChoice == 3) { 
                            sec_to_hour(); 
                            break; 
                        }
                        else if (timeChoice == 4) { 
                            hour_to_min(); 
                            break; 
                        }
                        else if (timeChoice == 5) { 
                            min_to_sec(); 
                            break; 
                        }
                        else if (timeChoice == 6) { 
                            hour_to_sec(); 
                            break; 
                        }
                        else if (timeChoice == 7) break;
                        else printf("Invalid! Try again!\n");
                    }
                }

                else if (calcChoice == 3) {
                    while (1) {
                        printf("\nCurrency Conversion:\n");
                        printf("1 ---> Rupees -> Dollar\n");
                        printf("2 ---> Rupees -> Euro\n");
                        printf("3 ---> Dollar -> Rupees\n");
                        printf("4 ---> Dollar -> Euro\n");
                        printf("5 ---> Euro -> Rupees\n");
                        printf("6 ---> Euro -> Dollar\n");
                        printf("7 ---> Back\n");
                        printf("Enter: ");
                        scanf("%d", &currChoice);

                        if (currChoice == 1) { 
                            rup_to_doll(); 
                            break; 
                        }
                        else if (currChoice == 2) { 
                            rup_to_euro(); 
                            break; 
                        }
                        else if (currChoice == 3) { 
                            doll_to_rup(); 
                            break; 
                        }
                        else if (currChoice == 4) { 
                            doll_to_euro(); 
                            break; 
                        }
                        else if (currChoice == 5) { 
                            euro_to_rup(); 
                            break; 
                        }
                        else if (currChoice == 6) { 
                            euro_to_doll(); 
                            break; 
                        }
                        else if (currChoice == 7) break;
                        else printf("Invalid! Try again!\n");
                    }
                }

                else if (calcChoice == 4) {
                    while (1) {
                        printf("\nAngle Conversion:\n");
                        printf("1 ---> Degree -> Radian\n");
                        printf("2 ---> Radian -> Degree\n");
                        printf("3 ---> Back\n");
                        printf("Enter: ");
                        scanf("%d", &angleChoice);

                        if (angleChoice == 1) { 
                            degree_to_rad(); 
                            break; 
                        }
                        else if (angleChoice == 2) { 
                            rad_to_degree(); 
                            break; 
                        }
                        else if (angleChoice == 3) break;
                        else printf("Invalid! Try again!\n");
                    }
                }

                else if (calcChoice == 5) break;
                else printf("Invalid menu choice! Try again!\n");
            }
            break;

        case 3:
            printf("\nThanks for using Calculator & Converter!\n");
            return 0;

        default:
            printf("Invalid main menu option! Try again!\n");
        }
    }
    return 0;
}