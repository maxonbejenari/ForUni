#include <stdio.h>

int main() {
    int n;
    int v[n];
    int v1[n];
    int k = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (v[i] == v[j]) {
                count++;
            }
        }

        if (count == 1) {
            v1[k++] = v[i];
        }
    }

    for (int i = 0; i < k; i++) {
        printf("%d ", v1[i]);
    }
}