#include <stdio.h>
#include <string.h>

int main(){
	
	char str[1001];
	scanf ("%s", str);
	getchar();
	
	int hash[26] = {0};
	
	for (int i = 0; i < strlen(str); i++){
		hash[str[i]-'a']++;
	}
	
	for (int i = 0; i < 26; i++){
		printf ("[%c] : %d\n", i+'a', hash[i]);
	}
	
	return 0;
	
}
