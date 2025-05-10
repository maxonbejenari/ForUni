#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    long long CNP;
}Pers;

int main() {
    Pers pers1;
    strcpy(pers1.name,"Alex");
    pers1.CNP = 123132231;

    printf("Name of person: %s and CNP: %d", pers1.name, pers1.CNP);

}