#include <stdio.h>

int main() {
    int n, i, j, isUnique;
    int array[20];
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++) {
        isUnique = 1;
        for (j = 0; j < n; j++) {
            if (array[i] == array[j] && i != j) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("YAY!\n");
            break;
        }
    }

    if (!isUnique) {
        printf("ZONK!\n");
    }

    return 0;
}

