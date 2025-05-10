#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void sortingStr(char* str, int n);

int main() {
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);

    sortingStr(str, n);
    printf("%s", str);

}

void sortingStr(char* str, int n) {
    for (int i = 0; i < n - 1; i++)  {
        for (int j = i + 1; j < n; j++) {
            if (tolower(str[i]) > tolower(str[j])) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}