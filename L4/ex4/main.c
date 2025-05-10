#include <stdio.h>

void createVec(int n, int vec[]) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
    }
}

void pArr(int n, int vec[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", vec[i]);
    }
}

void solution(int n, int vec1[], int vec2[]) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        int dist = 1;
        for (int j = 0; j < k; j++) {
            if (vec1[i] == vec2[j]) {
                dist = 0;
                break;
            }
        }

        if (dist) {
            vec2[k++] = vec1[i];
        }
    }
    pArr(k, vec2);
}

int main() {
    int n;
    int vec1[n], vec2[n];

    scanf("%d", &n);

    createVec(n, vec1);

    solution(n, vec1, vec2);
}