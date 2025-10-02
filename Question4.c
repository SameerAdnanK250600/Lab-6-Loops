#include <stdio.h>

int main() {
    int num;

    int lastTerm = 0;
    int firstTerm = 1;
    int result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        result = firstTerm + lastTerm;
        firstTerm = lastTerm;
        lastTerm = result;
    }

    printf("The fibonacci to the %dth term is: %d\n", num, result);
}
