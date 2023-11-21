#include <stdio.h>

long long evenFibonacciSum(long long n) {
    if (n <= 1) return 0;

    long long a = 0, b = 2, sum = a + b;
    
    while (b <= n) {
        long long next = 4 * b + a;
        if (next > n) break;
        
        a = b;
        b = next;
        sum += b;
    }

    return sum;
}

int main() {
    long long N;

    printf("Enter the value of N: ");
    scanf("%lld", &N);

    long long sum = evenFibonacciSum(N);

    printf("Sum of even Fibonacci numbers till %lld is %lld\n", N, sum);

    return 0;
}
