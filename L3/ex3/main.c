#include <stdio.h>

int main() {
    int arr[] = {22, 19, 0, 4};
    int reverse[100];
    int size = sizeof(arr) / sizeof(arr[0]);

   for (int i = size - 1, j = 0; i >= 0; i--, j++){
        reverse[j] = arr[i];
   }
   
   for (int i = 0; i < size; i++) {
        printf("%d ", reverse[i]);
   }
}