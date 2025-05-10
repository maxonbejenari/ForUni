#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char sir1[20];
    char sir2[20];

    strcpy(sir1, "22");
    strcpy(sir2, "33");

    int intStr1 = atoi(sir1);
    int intStr2 = atoi(sir2);

    int res = intStr1 + intStr2;

    printf("%d", res);
}