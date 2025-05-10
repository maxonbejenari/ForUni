#include <stdio.h>

int solution(int c) {
    return c * 2;
}

float main() {
    int c;

    scanf("%d", &c);

    printf("%d", solution(c));
}