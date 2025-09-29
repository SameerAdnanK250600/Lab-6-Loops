#include <stdio.h>

int main() {
	int input;
	
	printf("Enter number: \n");
	scanf("%d", &input);
	
	for (int i; input >= 10; i++) {
		printf("%d", input%10);
		input = (input - (input % 10)) / 10;
	}
	
	printf("%d", input);
	
	return 0;
}
