#include <stdio.h>

int main() {
    int num;
    int sumOfPowers = 0;
    int numOfDigits = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    int originalNum = num;

    int temp = num;
    for (int digitCounter = 0; temp >= 10; digitCounter++) {
        temp = temp / 10;
        numOfDigits++;
    }

    num = originalNum;

    for (int digitIndex = 1; digitIndex <= numOfDigits; digitIndex++) {
        int digit = num % 10;
        int power = 1;

        for (int powerCounter = 1; powerCounter <= numOfDigits; powerCounter++) {
            power = power * digit;
        }

        sumOfPowers += power;
        num = num / 10;
    }

    originalNum == sumOfPowers ? printf("%d is an Armstrong Number!\n", originalNum) : printf("%d is not an Armstrong Number\n", originalNum);
}
