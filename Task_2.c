#include <stdio.h>

int main() {
    int number;
    int digitCount = 0;

    printf("Enter a number between 2 and 7 digits: ");
    scanf("%d", &number);

    int temp = number;
    while (temp != 0) {
        temp = temp / 10;
        digitCount++;
    }

    if (digitCount >= 2 && digitCount <= 7) {
        printf("The number %d has %d digits.\n", number, digitCount);
        if (digitCount % 2 == 0) {
            printf("The number of digits is even.\n");
        } else {
            printf("The number of digits is odd.\n");
        }
    } else {
        printf("Invalid input! Please enter a number with 2 to 7 digits.\n");
    }

    return 0;
}