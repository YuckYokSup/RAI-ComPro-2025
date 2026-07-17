#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;

    printf("Please enter an integer value : ");
    scanf ("%d",&a);
    printf("You entered %d",a);

    printf("\nPlease enter a float value : ");
    scanf("%f",&b);
    printf("You entered %.1f", b);


    printf("\nPlease enter a character : ");
    scanf (" %c",&c);
    printf("You entered %c\n",c);

    return 0;
}