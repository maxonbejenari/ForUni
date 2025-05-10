#include <stdio.h>

void solution(int *day, int *mon, int *year);

int main() {
    int day, mon, year;
    solution(&day, &mon, &year);
}

void solution(int *day, int *mon, int *year) {
    scanf("%d %d %d", day, mon, year);
    printf("%d/%d/%d", *day, *mon, *year);
}