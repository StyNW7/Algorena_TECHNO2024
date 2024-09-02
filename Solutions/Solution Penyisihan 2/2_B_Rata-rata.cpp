#include <stdio.h>

int main() {
    int T, N, i, j;
    float sum,average;
      
    scanf("%d", &T);
    
    for (i = 1; i <= T; i++) {
        scanf("%d", &N);
        
        sum = 0.0;
        
        for (j = 0; j < N; j++) {
            int num;
            scanf("%d", &num);
            sum += num;
        }
        
        average = sum / N;
        
        printf("Case #%d: %.2f\n", i, average);
    }
    return 0;
}

