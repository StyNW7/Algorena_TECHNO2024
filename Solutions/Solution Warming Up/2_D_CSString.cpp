#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char input[201];
	char temp[201];
	char currStr[201];
	
	char key[6];
	char currKey[6];
	
	int counter = 0;

	scanf("%[^\n]", input);
	getchar();
	
	scanf("%[^\n]", key);
	getchar();
	
	
	strcpy(temp, input);
	while(1){
		sscanf(temp, "%s %[^\n]", currStr, temp);
		counter++;
		
		if(strcmp(temp, currStr) == 0){
			break;
		}
	}
	strcpy(temp, input);
	
	printf("START: %d\n", counter);
	while(1){
		sscanf(temp, "%s %[^\n]", currStr, temp);
		sprintf(currKey, "%c%c%03d", currStr[0], currStr[1], strlen(currStr));
		
		if(strcmp(currKey, key) == 0){
			counter--;
			
			printf("[Found %s]\n", key);
		} else{
			printf("%s\n", currStr);
		}
		
		if(strcmp(temp, currStr) == 0){
			break;
		}
	}
	printf("END: %d\n", counter);
	printf("Original String: %s\n", input);
	
	return 0;
}
