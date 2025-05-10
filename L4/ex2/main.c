#include <stdio.h>

int main() { 
    int sum = 0;
    int matrix[2][2] = { 
        {2, 2},
        {3, 3} };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum += *(matrix[i] + j); // == matrix[i][j]
        }
    }

    printf("%d ", sum);
}