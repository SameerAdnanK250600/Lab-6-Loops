#include <stdio.h>

int main() {
	int num;
	
	int result = 1;
	
	printf("Enter number: \n");
	scanf("%d", &num);
	
	for (int i; i <= num; i++) {
		result = result*i;
	}
	
	printf("Factorial of %d is %d\n", num, result);
}
