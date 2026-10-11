
#include <stdio.h>

int main() {
    int num, original, digit;
    int sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("%d is not a Strong Number.\n", num);
        return 0;
    }

    original = num;

    do {
        digit = num % 10;
        fact = 1;

        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;

    } while (num > 0);

    if (sum == original) {
        printf("%d is a Strong Number.\n", original);
    } else {
        printf("%d is not a Strong Number.\n", original);
    }

    return 0;
}
