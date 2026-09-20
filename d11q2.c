// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    double cp, sp, percent;
    scanf("%lf %lf", &cp, &sp);
    if (sp > cp) {
        percent = (sp - cp) * 100 / cp;
        printf("Profit %.0f%%", percent);
    } else if (cp > sp) {
        percent = (cp - sp) * 100 / cp;
        printf("Loss %.0f%%", percent);
    } else {
        printf("No Profit No Loss");
    }
    return 0;
}