#include<stdio.h>
#include<time.h>
int main(){
    int number, guess;
    srand(time(0));
    number = rand() % 100 +1;
    printf("Guess the number between 1 and 100 \n");
    guess =0;
    while(guess != number){
        printf("Enter your guess:");
        scanf("%d", &guess);
        if (guess > number){
            printf("Too high! try again.\n");

        }
        else if (guess <number){
            printf("Too low! try again.\n ");
        }
        else{
            printf("Correct! you guessed the number! \n");
        }
    }
}