#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int solution(int c1, int c2) {
    return pow(c1, 2) + pow(c2, 2);
}

int main() {
    int c1, c2;
    scanf("%d %d", &c1, &c2);
    printf("%d", solution(c1, c2));
}