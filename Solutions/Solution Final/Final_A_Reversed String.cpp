#include <stdio.h>

int main(){
	char S[50];
	char M[50];
	int T, a, b;
	
	scanf("%d", &T);
	
	for (int i = 1; i <= T; i++){
		scanf("%s", S);
	
		int n = 0;
		while (S[n] != '\0'){
			n++;
		}
		
		b = n-1;
		
		for (a = 0; a < n; a++){
			M[a] = S[b];
			b--;
		}
		
		M[n] = '\0';
		
		printf("Case #%d: %s\n", i, M);	
	}

	return 0;
}
