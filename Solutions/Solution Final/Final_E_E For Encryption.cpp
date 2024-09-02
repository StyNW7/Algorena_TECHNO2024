#include <stdio.h>
#include <string.h>

int main(){	
	int T;
	int space = 0;
	int curr, next, prev, sumCurr, sumNext, sumPrev;
	char arr[101];
	
	scanf("%d", &T);
	getchar();
	
	for(int i = 0; i < T; i++){
		scanf("%[^\n]", arr);
		getchar();
		
		//Convert lower to upper
		for(int j = 0; j <strlen(arr); j++){
			if(arr[j] >= 'a' && arr[j] <= 'z'){
				arr[j] = 'A' + (arr[j] - 'a');
			}
		}
		
		//Print
		printf("Case #%d: ", i+1);
		for(int j = 0; j < strlen(arr); j++){
			space = 0;
			
			if(arr[j] >= 'A' && arr[j] <= 'Z'){
				//For Alphabet
				curr = arr[j] - 'A' + 1;
				sumCurr = (curr / 10) + curr % 10;
				printf("%02d", curr);
				
				if(j+1 != strlen(arr) && arr[j+1] >='A' && arr[j+1] <= 'Z'){					
					next = arr[j+1] - 'A' + 1;
					sumNext = (next / 10) + next % 10;
					
					if(sumCurr != sumNext){
						space = 1;
					}
				} else{
					if(j+1 != strlen(arr)){
						space = 1;
					}
				}
				
			} else if(arr[j] >= '0' && arr[j] <= '9'){
				//For Number
				printf("0%c", arr[j]);
				
				if(j+1 != strlen(arr)){
					space = 1;
				}
			} else{
				//For non-alphabet and non-number
				printf("%c%c%c", arr[j], arr[j], arr[j]);
				
				if(j+1 != strlen(arr)){
					space = 1;
				}
			}
			
			if(space == 1){
				printf(" ");
			}
		}
		
		printf("\n");
	}
	
	return 0;
}
