#include <stdio.h>

int sum(int num1, int num2) {
    return num1 + num2;
}

int product(int num1, int num2) {
    return num1 * num2;
}

int main() {
    int num1, num2;
    printf("Introduce two numbers: ");
    scanf("%d %d", &num1, &num2);


    printf("The Sum is %d\n", sum(num1, num2));
    printf("The Product is %d", product(num1, num2));

    return 0;
}