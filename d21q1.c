// Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    long long n, temp, first, last, digits = 0, power10, middle;
    scanf("%lld", &n);
    if (n < 0) n = -n;
    if (n < 10) {
        printf("%lld", n);
        return 0;
    }
    temp = n;
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp;
    last = n % 10;
    power10 = 1;
    for (temp = 0; temp < digits; temp++)
        power10 *= 10;
    middle = (n % power10) / 10;
    printf("%lld", last * power10 + middle * 10 + first);
    return 0;
}