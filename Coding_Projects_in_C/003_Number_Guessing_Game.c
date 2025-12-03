/* PROJECT:-
We will write a program that generates a random number between 1 and 100 and asks the player to guess 
it. If the player’s guess is higher than the actual number, the program displays “Lower 
number please”. Similarly, if the user’s guess is too low, the program prints “Higher 
number please”. 
When the user guesses the correct number, the program displays the number of 
guesses the player used to arrive at the number. 
Hint: Use loop & use a random number generator.
*/

#include<stdio.h>
#include<stdlib.h> // Give access to rand() and srand()
#include<time.h> // Allow use tof time(NULL)

int main(){
    int randomn, count=0, guess;
    char agreement, again;
    // To generate a random number:
    srand(time(NULL)); // Each run gives different result!
    randomn = rand()%100 + 1; // Generated number between 0 to 99, then add 1 to shift range to 1 to 100!
    // Game start:
    printf("Wanna play the game (Y/N): \n");
    scanf(" %c", &agreement);
    
    if (agreement == 'Y' || agreement == 'y'){
        do {
            printf("GAME STARTED!!!\n");
            printf("Enter the number to guess between 1 to 100: \n");
            scanf("%d", &guess);
            if (guess>0 && guess<=100){
                while (guess != randomn){
                    if (guess>randomn){
                        printf("Lower number please!\nTry again!\n");
                        count+=1;
                        scanf("%d", &guess);
                    }
                    else if(guess<randomn){
                        printf("Higher Number please!\nTry again!\n");
                        count+=1;
                        scanf("%d", &guess);
                    }   
                }
                printf("Number Guessed!\n");
                printf("It took you %d guesses to find the number!\n", count+1); 
            } else {
                printf("Enter number between 1 to 100!!!\n");
            }

            printf("\nWANT TO PLAY AGAIN? (Y/N): ");
            scanf(" %c", &again);

            if (again == 'Y' || again == 'y') {
                srand(time(NULL));
                randomn = rand()%100 + 1;
                count = 0;
            }

        } while (again == 'Y' || again == 'y');
        printf("\nThank You For playing the Game! Please do come next time!\n");
    }
    else{
        printf("I think you are not in a mood to play. No Problem next time!");
    }
    
    return 0;
}