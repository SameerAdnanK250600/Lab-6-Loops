#include <stdio.h>

int main() {
    int num;
    int power;

    int result = 1;

    printf("Enter a number, and power to calculate: ");
    scanf("%d%d", &num, &power);

    for (int i = 1; i <= power; i++) {
        result = result * num;
    }

    printf("The result is: %d\n", result);

    return 0;
}
