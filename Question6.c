#include <stdio.h>

int main() {
    int oddSum, evenSum = 0;

    for (int odd = 1; odd <= 20; odd+=2) {
        oddSum += odd;
    }
    for (int even = 0; even <= 20; even+=2) {
        evenSum += even;
    }

    printf("The sum of odd and even numbers up till 20 are %d, %d", oddSum, evenSum);

    return 0;
}
