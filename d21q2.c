// Write a program to check if a number is a perfect number.

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n && n > 0)
        printf("Perfect number");
    else
        printf("Not perfect number");
    return 0;
}