#include <stdio.h>

int main() {
    char name[51]; 
    int age;
    
    scanf("%[^\n]", name);
    getchar();

    scanf("%d", &age);

    printf("Hello, I'm %s!\n", name);
    printf("I'm %d years old.\n", age); 

    return 0;
}

