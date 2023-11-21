#include <stdio.h>
#include <math.h>
int isArmstrong(int N) {
    int originalNumber = N;
    int numDigits = 0;
    int sum = 0;
    while (N != 0) {
        N /= 10;
        numDigits++;
    }

    N = originalNumber; 
    while (N != 0) {
        int digit = N % 10;
        sum += pow(digit, numDigits);
        N /= 10;
    }
    return (sum == originalNumber);
}

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    if (isArmstrong(N)) {
        printf("%d is an Armstrong number.\n", N);
    } else {
        printf("%d is not an Armstrong number.\n", N);
    }

    return 0;
}
