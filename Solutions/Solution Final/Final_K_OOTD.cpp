#include <stdio.h>

int main(){
	int N, M;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		scanf("%d", &M);
		if(M % 2 == 0) puts("biru");
		else puts("pink");
	}
	
	return 0;
}
