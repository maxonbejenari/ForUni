#include <stdio.h>
#include <math.h>

typedef struct {
    int x, y;
}punct;

int main() {
    punct p1, p2;
    p1.x = 6;
    p1.y = 3;
    p2.x = 9;
    p2.y = 7;

    int dist = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p2.x), 2));

    printf("%d", dist);
}