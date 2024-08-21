#include <stdio.h>

// my head hurt, i hate this

long max(long left, long right)
{
    return (left > right) ? left : right;
}

long min(long left, long right)
{
    return (left > right) ? right : left;
}

long sortWay(long amount, long one, long two)
{
    long output = 1;
    long most = max(one, two), less = min(one, two);

    while (amount > most)
    {
        output *= amount;

        amount -= 1;
    }

    while (less > 1)
    {
        output /= less;

        less -= 1;
    }

    return output;
}

int main()
{
    long number;
    scanf("%li", &number);

    long two = number / 2, one = number % 2;
    long total = 0;
    for (long i = 0; i <= (long)number / 2; i++)
    {
        total += sortWay(one + two, one, two);

        two -= 1;
        one += 2;
    }
    printf("method = %d", total);

    return 0;
}