#include <stdio.h>

int main(){
	int tc, M;
	scanf("%d", &tc);
	
	for(int i = 0; i < tc; i++){
		scanf("%d", &M);
		
		printf("%d\n", M/10 + M%10);
	}
	
	return 0;
}
