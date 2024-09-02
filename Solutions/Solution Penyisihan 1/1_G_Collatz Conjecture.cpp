#include <stdio.h>

int main(){
	int T;
	long long number;
	int combo, count, iteration;
	
	scanf("%d", &T);
	getchar();
	
	for(int i = 0; i < T; i++){
		combo = 0;
		count = 0;
		iteration = 0;
	
		scanf("%lld", &number);
		getchar();
		
		while(1){
			if(number % 2 == 1){
				count = 0;
				number = number * 3 + 1;
			} else {
				count++;
				number /= 2;
				
				if(count == 3){
					combo++;
					count = 0;
				}
			}
			iteration++;
			
			if(number == 0) return 0;
			
			if(number == 1){
				break;
			}
		}
		
		printf("Case #%d: %d %d\n", i+1, iteration, combo);
	}
	
	return 0;
}
