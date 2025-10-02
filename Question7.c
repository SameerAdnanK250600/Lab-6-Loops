#include <stdio.h>

int main() {
	int enteredPin;
	int pin = 1234;
	
	do {
		printf("Enter Pin: \n");
		scanf("%d", &enteredPin);
		if (enteredPin != pin) {
			printf("Incorrect Pin Entered!\n");
		}
	} while (enteredPin != pin);
	printf("You entered correct pin!\n");
	
	return 0;
}
