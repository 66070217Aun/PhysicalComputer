#include "stdio.h"

int main() {
    long allStation;
    long sameAmount, samePrice;
    long promoAmount, promoPrice;
    long normalPrice;
    long from, to;
    scanf("%ld\n%ld\n%ld\n%ld\n%ld\n%ld\n%ld\n%ld", &allStation, &sameAmount, &samePrice, &promoAmount, &promoPrice, &normalPrice, &from, &to);

    if (from <= 0 || from > allStation || to <= 0 || to > allStation) { printf("Error"); return 0; }

    long amount = 0;
    long travelAmount = to - from;
    if (travelAmount < 0) travelAmount *= -1;

    if (travelAmount > sameAmount) {
        amount += samePrice;
        travelAmount -= sameAmount;
    } else {
        printf("%ld", samePrice);
        return 0;
    }

    if (travelAmount > promoAmount) {
        amount += promoAmount * promoPrice;
        travelAmount -= promoAmount;
    } else {
        printf("%ld", (amount + (travelAmount*promoPrice)));
        return 0;
    }

    amount += travelAmount * normalPrice;
    printf("%ld", amount);

    return 0;
}