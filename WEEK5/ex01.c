#include <stdio.h>

int main()
{
    int number;
    int sum = 0;
    float average;

    for (int i = 1; i <= 10; i++)
    {
        printf("%d. Enter the number: ", i);
        scanf("%d", &number);

        sum += number;
    }

    average = (float)sum / 10;

    printf("Total sum is %d\n", sum);
    printf("Average is %.2f\n", average);

    return 0;
}