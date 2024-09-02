#include <stdio.h>
#include <string.h>

int main(){
/*
9
3 8
U 13
L 3
D 13
L 3
R 1
U 8
L 1
R 2
STOP
*/

/*
9
0 0
R 3
L 3
D 4
R 3
L 3
D 4
R 3
L 7
U 3
RU 3
U 2
L 3
STOP
*/
	
	int M, xP, yP, turn;
	char input[101];
	
	scanf("%d", &M);
	getchar();
	
	int map[M][M];
	
	//Initialize map
	for(int i = 0; i < M; i++){
		for(int j = 0; j < M; j++){
			map[i][j] = 0;
		}
	}
	
	scanf("%d %d", &xP, &yP);
	getchar();
	
	map[yP][xP]++;
	
	while(1){
		scanf("%s", input);
		
		if(strcmp(input, "STOP") == 0){
			getchar();
			break;
		}
		
		scanf("%d", &turn);
		getchar();
		
		while(turn != 0){
			if(strcmp(input, "L") == 0){
				xP--;
			} else if(strcmp(input, "R") == 0){
				xP++;
			} else if(strcmp(input, "U") == 0){
				yP--;
			} else if(strcmp(input, "D") == 0){
				yP++;
			} else if(strcmp(input, "LU") == 0 || strcmp(input, "UL") == 0){
				xP--;
				yP--;
			} else if(strcmp(input, "RU") == 0 || strcmp(input, "UR") == 0){
				xP++;
				yP--;
			} else if(strcmp(input, "LD") == 0 || strcmp(input, "DL") == 0){
				xP--;
				yP++;
			} else if(strcmp(input, "RD") == 0 || strcmp(input, "DR") == 0){
				xP++;
				yP++;
			}
			
			if(yP == -1){
				yP = M-1;
			}
			
			if(xP == -1){
				xP = M-1;
			}
			
			if(yP == M){
				yP = 0;
			}
			
			if(xP == M){
				xP = 0;
			}
			
			
			map[yP][xP]++;
			
			if(map[yP][xP] == 3){
				map[yP][xP] = 0;
			}
			
			turn--;
		}	
	}
	
	
	//Displaying Map
	for(int j = 0; j < M+2; j++){
		printf("-");		
	}
	printf("\n");
	
	for(int i = 0; i < M; i++){
		for(int j = 0; j < M; j++){
			if(j == 0){
				printf("|");
			}
			
			if(map[i][j] != 0){
				printf("*");
			} else{
				printf(" ");
			}
			
			if(j == M-1){
				printf("|");
			}
		}
		printf("\n");
	}
	
	for(int j = 0; j < M+2; j++){
		printf("-");		
	}
	printf("\n");
	
	return 0;
}
