#include <stdio.h>

int main(){
	int N, M;
	int sum = 0;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		scanf("%d", &M);
		sum += M;
	}
	
	printf("%d\n", sum);
	
	return 0;
}
