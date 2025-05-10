#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello";
    char* p = str;

    printf("%s\n", str);

    *p++ = 'z';
    *p++ = 'a';
    *p++ = 'b';
    *p = '\0';

    printf("%s", str);


}