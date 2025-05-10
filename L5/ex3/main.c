#include <stdio.h>

char* strRead(char* str) {
    scanf("%s", str);
    return str;
}

int main() {
    char str[10];

    printf("%s", strRead(str));

}