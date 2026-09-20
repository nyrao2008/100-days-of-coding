// Write a program to check if a number is a strong number.

#include <stdio.h>

int factorial(int n) {
    int i, fact = 1;
    for (i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, temp, d, sum = 0;
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        d = temp % 10;
        sum += factorial(d);
        temp /= 10;
    }
    if (sum == n)
        printf("Strong number");
    else
        printf("Not strong number");
    return 0;
}