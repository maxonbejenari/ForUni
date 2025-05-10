#include <stdio.h>

int main() {
    int* p, *p1;
    int a = 1, b = 2;
    p = &a;
    p1 = &b;
    printf("%x", &a);
    printf("Val lui a: %d, adresa lui a: %x\n", a, p);
    printf("Val lui b: %d, ardesa lui b: %x", b, p1);
}