// Q37: Write a program to find the LCM of two numbers.
// LCM can be calculated by (number1 * number2)/GCD.
 #include<stdio.h>
 
 int main(){
    int n1, n2;
    printf("Enter two numbers to find LCM: \n");
    scanf("%d,%d", &n1, &n2);
    //To find gcd:
    int altn1 = n1, altn2 = n2;
    int rem, gcd;
    if (n1>0 && n2>0 && n1!=n2){
        while(altn1>0){
            rem = altn2%altn1;
            altn2 = altn1;
            gcd = altn1;
            altn1 = rem;
        }if (gcd!=0){ // To find LCM:
            printf("LCM of %d and %d is %d", n1, n2, (n1*n2)/gcd);
        }
    }else {
        printf("Wrong input!");
    }
    return 0;
 }
