#include<stdio.h>

//void factorial(int a){
//	long long int value = 1;
//	while(a>0){
//		value *= a;
//		a--;
//	}
//	
//	printf("%lld\n", value);
//}


int main(){
	int a;
	long long int value = 1;
	
	
	do{
	    scanf("%d", &a);
	    getchar();
	    
	    if (a >= 0 && a <= 20) {
	    	while(a>0){
				value *= a;
				a--;
			}
			break;
        } 
        
        else{ 
            if (a < 0){
            printf("Input must be a non-negative integer between 0 and 20.\n");
            }
            
            else {
            printf("Input must be between 0 and 20.\n");
            }
        }
    } while(1);
    
	
	printf("%lld\n", value);
	
	return 0;
}
