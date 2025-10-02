#include <stdio.h>

int main() {
    int num;
    char continuation;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        getchar();

        for (int i = 1; i <= 10; i++) {
            printf("%d * %d = %d\n", num, i, i * num);
        }

        printf("Do you want to continue?(y/n):");
        do {
            scanf("%c", &continuation);
            getchar();
        } while (!(continuation == 'Y' || continuation == 'y' || continuation == 'n' || continuation == 'N'));

    } while (continuation == 'Y' || continuation == 'y');

    return 0;
}
