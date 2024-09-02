#include<stdio.h>

int main(){
	char phoneNumber[10] = "";
	int tc = 0;
	scanf("%d", &tc);
	getchar();
	for (int i = 0; i<tc; i++){
		scanf("%s", &phoneNumber);
		getchar();	
		if(phoneNumber[0] == '6' && phoneNumber[1] == '8'){
			printf("Calling JEKO!\n");
		} else if (phoneNumber[0] == '6' && phoneNumber[1] == '0'){
			printf("Calling DANKIN!\n");
		} else {
			printf("Wrong Number!\n");
		}		
	}
}
