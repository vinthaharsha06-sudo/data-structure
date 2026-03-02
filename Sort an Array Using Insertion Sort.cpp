#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[10000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int swaps = 0;

    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Perform swap only if needed
        if (min_idx != i) {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
            swaps++;
        }
    }

    printf("%d", swaps);
    return 0;
}

