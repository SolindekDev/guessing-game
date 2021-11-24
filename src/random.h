#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

// Thanks for help lemon with generating numbers!
int randomNumber(int min, int max) {
    int generated;

    srand(time(0));
    generated = (rand() % max + min);

    return generated;
}