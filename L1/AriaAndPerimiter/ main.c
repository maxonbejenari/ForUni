#include <stdio.h>

int Aria(int side) {
    return side * side;
}

int Perimeter(int side) {
    return 4 * side;
}

int main() {
    int side;
    scanf("%d", &side);

    printf("The aria of square with side: %d is %d\n",side, Aria(side));
    printf("The Perimeter of square with side: %d is %d\n",side ,Perimeter(side));
}