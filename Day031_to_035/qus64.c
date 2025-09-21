// Q64: Find the digit that occurs the most times in an integer number.

#include<stdio.h>

int main(){
    long int n, maxfreq=0, mostfreqdigit=0;
    printf("Enter number/integer: \n");
    scanf("%ld", &n);
    int frequency[10] = {0};
    int altn=n;
    if(n>0){
        while(altn!=0){
            int digits = altn%10;
            frequency[digits]++;
            altn/=10;
        }
        int maxfrequency=0; mostfreqdigit=0;
        for(int i=0; i<10; i+=1){
            if(frequency[i]>maxfrequency){
                maxfrequency = frequency[i];
                mostfreqdigit = i;
            }
        }
        printf("Digit that occurs most times is %d (Frequency = %d)\n", mostfreqdigit, maxfrequency);
    }
    return 0;
}
