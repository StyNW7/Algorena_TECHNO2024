#include <stdio.h>

int main() {
    int n, m, i, j, k;
    int array1[20], array2[20], merged[40];

    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        scanf("%d", &array1[i]);
    }

    scanf("%d", &m);
    getchar();

    for (i = 0; i < m; i++) {
        scanf("%d", &array2[i]);
    }

    i = 0; j = 0; k = 0;
    while (i < n && j < m) {
        if (array1[i] < array2[j]) {
            merged[k++] = array1[i++];
        } else {
            merged[k++] = array2[j++];
        }
    }

    while (i < n) merged[k++] = array1[i++];
    while (j < m) merged[k++] = array2[j++];

    for (i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}

