#include<stdio.h>
#include<string.h>

int main(){
    int warriorStart = 0;
    int totalFloors = 0;
    int warriorPower = 0;
    int monsterPower = 0;
    int bomb = 0;
    
    scanf("%d %d %d", &warriorStart, &totalFloors, &bomb);
    getchar();
    monsterPower = 0; 
    
    for (int i = warriorStart; i < totalFloors; i++){
        if (i == bomb) {
            continue;
        } else if (i % 2 == 0) {
            warriorPower++;  
        } else {
            monsterPower++;  
        }
    }

    if (warriorPower > monsterPower){
        printf("WIN\n");
    } else {
        printf("LOST\n");
    }
}

