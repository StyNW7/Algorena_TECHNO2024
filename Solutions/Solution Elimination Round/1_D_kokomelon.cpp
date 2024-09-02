#include <stdio.h>
#include <string.h>

int main(){
	char str[101];
	
	scanf("%s", str);
	
	for(int i = 0; i < strlen(str); i++){
		if(str[i] == 'k') str[i] = 'c';
	}
	
	printf("%s\n", str);
	
	return 0;
}
