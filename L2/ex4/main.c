#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int solution(int x, int y, int m, int n) {
    return pow((x * y), n) + pow(x, n) + pow(y, m);
}

int main() {
    int x, y, m, n;

    scanf("%d %d %d %d", &x, &y, &m, &n);
    printf("%d", solution(x,y,m,n));
}