#include <stdio.h>

int main() {
    int num;
    int isPrime = 1;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num < 0) printf("\nPlease enter a positive number.\n");

    } while (num < 0);

    for (int i = num-1; i > 1; i--) {
        if (num % i == 0) {
            isPrime = 0;
        }
    }
    isPrime == 1 ? printf("%d is prime.\n", num) : printf("%d isn't prime.\n", num);
}
