#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#include "random.h"
#include "clear.h"

#define MIN_NUMBER 1
#define MAX_NUMBER 1000

void win() {
    cls();
    printf("You win!\n");
    printf("Thanks for playing this very easy but fun game.\n");
    printf("All of code this application is on my GitHub\nhttps://github.com/solindekdev/guessing-game\n\n");
    int waitingForKey;
    scanf("%d", &waitingForKey);
}

void gameWhile(int randomNumber) {
    int choice;
    printf(">>> ");
    scanf("%d", &choice);
    
    if (choice > randomNumber) {
        printf("You number is bigger than guess number!\n");
        gameWhile(randomNumber); 
    } else if (choice < randomNumber) {
        printf("You number is smaller than guess number!\n");
        gameWhile(randomNumber);
    } else if (choice == randomNumber) {
        win();
    }
}

int main(int argc, char **argv) {
    printf("------------------\n");
    printf(" Guessing Number\n");
    printf("------------------\n");
    printf("\nGuess a random number from %d to %d\n", MIN_NUMBER, MAX_NUMBER);
    int randomNum = randomNumber(MIN_NUMBER, MAX_NUMBER);

    gameWhile(randomNum);

    return 0;
}