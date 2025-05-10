#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// int main() {
//     printf("Valoare absoluta a lui %d este %d\n", -5, abs(-5));
//     printf("Valoarea absoluta a lui %f este %f\n", -0.2, fabs(-0.2));
//     printf("Valoarea absoluta a lui %f este %f\n", 3.4, ceil(3.4));
//     printf("exp(%f) este %f\n", 1.2, exp(1.2));
//     printf("Logaritmul natural din 32 este %f\n", log(32.0));
//     return 0;
// }

int main() {
    srand(time(NULL));
    for (int i = 0; i <= 10; i++) {
        printf("%d \t", 10 + rand() %20);
    }
    return 0;
}