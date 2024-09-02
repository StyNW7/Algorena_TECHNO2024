#include <stdio.h>
#include <string.h>

int main(){
	
	int test;
	scanf ("%d", &test);
	getchar();
	
	for (int i = 0; i < test; i++){
		char a[101];
		char b[101];
		scanf ("%s %s", a, b);
		getchar();
		char temp = a[0];
		a[0] = b[strlen(b)-1];
		b[strlen(b)-1] = temp;
		printf ("%s %s\n", b, a);
	}
	
	return 0;
	
}
