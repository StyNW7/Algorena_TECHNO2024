#include <stdio.h>

int main() {
    int age;
	int tc = 0;
    scanf("%d", &tc);
	getchar();
	for (int i = 0; i<tc; i++){
    	scanf("%d", &age);
		getchar();
	    if (age >= 1 && age <= 12) {
	        printf("Child\n");
	    } else if (age > 12 && age <= 18) {
	        printf("Teenager\n");
	    } else if (age > 18 && age <= 60) {
	        printf("Adult\n");
	    } else if (age > 60){
	        printf("Senior\n");
	    } else if (age < 1){
	    	printf("Invalid Input\n");
		}
	}
    return 0;
}

