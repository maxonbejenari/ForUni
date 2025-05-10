#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    printf("Enter char: ");
    scanf(" %c ", &ch);

    char *first = strchr(str, ch);
    char *last = strchr(str, ch);

    if (first != NULL) {
        printf("First: %ld\n", first - str);
        printf("Last: %ld\n", last - str);
    } else {
        printf("not found\n");
    }
    return 0;
}