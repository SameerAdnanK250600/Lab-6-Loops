#include <stdio.h>

int main() {
    int input;
    int result = 0;

    printf("Enter number: \n");
    scanf("%d", &input);

    int originalInput = input;

    for (int i; input >= 10; i++) {
        result = (result*10) + (input%10);
        input = (input - (input % 10)) / 10;
    }

    result = (result*10) + (input%10);

    originalInput == result ? printf("Number is palindrome!\n") : printf("Number isn't palindrome!\n");

    return 0;
}
