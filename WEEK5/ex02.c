#include <stdio.h>

int main()
{
    int number;
    int sum = 0;
    int i = 1;

    while (i <= 10)
    {
        printf("%d. Enter the number: ", i);
        scanf("%d", &number);

        sum += number;
        i++;
    }

    printf("Total sum is %d\n", sum);

    return 0;
}