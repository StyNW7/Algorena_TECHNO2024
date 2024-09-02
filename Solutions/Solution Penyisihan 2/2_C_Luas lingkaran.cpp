#include <stdio.h>

int main(){
	int T, r;
	float area;
	
	scanf("%d", &T);
	
	for (int i = 1; i <= T; i++){
		scanf("%d", &r);
		
		area = 3.14 * r * r;
		
		printf("Case #%d: %.2f\n", i, area);
	}

	return 0;
}
