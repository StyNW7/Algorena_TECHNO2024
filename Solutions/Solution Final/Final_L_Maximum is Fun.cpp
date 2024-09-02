#include <stdio.h>

int main() {
	int M, N;
	
	scanf("%d %d", &M, &N);
	printf("\n");
	int matrix[M][N];
	
    for(int i = 0; i < M; i++){
    	for(int j = 0; j < N; j++){
    		scanf("%d", &matrix[i][j]);
		}
	}
	
	// Mencari Nilai Max pada setiap baris
	for(int i = 0; i < M; i++){
		int maxRow = matrix[i][0];
    	for(int j = 0; j < N; j++){
    		if(matrix[i][j] > maxRow){
    			maxRow = matrix[i][j];
			}
		}
		printf("Maximum Value in the %d row = %d\n", i+1, maxRow);
	}
	
	printf("\n");
	for(int j = 0; j < N; j++){
		int maxColumn = matrix[0][j];
    	for(int i = 0; i < M; i++){
    		if(matrix[i][j] > maxColumn){
    			maxColumn = matrix[i][j];
			}
		}
		printf("Maximum Value in the %d column = %d\n", j+1, maxColumn);
	}
	
    return 0;
}

