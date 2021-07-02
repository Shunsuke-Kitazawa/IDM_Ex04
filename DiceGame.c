#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	char s[100]; 
	printf("What is your name?\n> ");
	scanf("%s", s);
	printf("Hello, %s\n", s);
	
	int a, b;
	printf("Rolling the dice...\n");
	srand((unsigned int)time(NULL));
	a = rand() % 6 + 1;
	srand((unsigned int)time(NULL) + 10);
	b = rand() % 6 + 1;
	printf("Dice 1: %d\n", a);
	printf("Dice 2: %d\n", b);
	printf("Total value: %d\n", a+b);
	return 0;
}
