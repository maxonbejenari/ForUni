#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char *deck[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    int order[13];

    srand(time(NULL));

    // set an index for every character
    for (int i = 0; i < 13; i++) {
        order[i] = i;
    }

    // suffle deck
    for (int i = 0; i < 13; i++)  {
        int j = rand() % 13;
        int temp = order[i];
        order[i] = order[j];
        order[j] = temp;
    }

    // print deck in random format
    for (int i = 0; i < 13; i++) {
        printf("%s\t", deck[order[i]]);
    }

}