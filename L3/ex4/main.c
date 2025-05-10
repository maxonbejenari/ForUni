#include <stdio.h>

int main() {
    char str[100];
    char* p;

    fgets(str, sizeof(str), stdin);

    p = str;

    for (int i = 0; p[i] != '\0'; i++) {
        printf("%c ", p[i]); // going through str with index
    }

    for (int i = 0; *(p + i) != '\0'; i++) {
        printf("%c ", *(p + i)); // read through str with aretmetic pointer
    }
}