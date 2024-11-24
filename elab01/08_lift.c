#include <stdio.h>

int main(void)
{
    int max;
    int sum = 0, n = 0, temp;
    printf("Enter the maximum weight in kg: ");
    scanf("%i", &max);

    while (max > sum)
    {
        printf("Enter passenger's weight in kg: ");
        scanf("%i", &temp);
        sum += temp;
        n++;
    }

    if (sum > max)
    {
        n--;
    }

    printf("The elevator can carry %i passenger(s)\n", n);

    return 0;
}