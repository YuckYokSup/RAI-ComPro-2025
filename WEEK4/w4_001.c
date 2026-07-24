#include<stdio.h>
int main()
{
    float radius, pi, area;
    pi = 22.0/7; // pi = 3.14;
    printf ("Enter Radius of Circular : ");
    scanf ("%f", &radius);
    area = pi*radius*radius;
    printf ("\nArea of Circular : %f", area);
return 0;
}