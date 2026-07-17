#include<stdio.h>
int main()
{
float point;
char name[20];
int x = 10,y;
    printf("Before : %d\n",x);
    y = x++;
    printf("After :x %d, y=%d\n",x,y);
    printf ("Enter your name : ");
    scanf ("%[^\n]",name);
    printf ("Enter your point : ");
    scanf ("%f",&point);

    printf("name : %s, point : %0.1f\n",name,point);
return 0;
}