#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int solution(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        int n = solution(-20, 20);
        printf("%d \t", n);
    }
}