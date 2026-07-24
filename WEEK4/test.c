#include<stdio.h>
int main()
{
    char name[40] , id[8];
    int score1 , score2 , score3, total;
    printf ("Enter your Name Surname : ");
    scanf ("%[^\n]",name);
    printf ("Enter your student ID : ");
    scanf ("%s",id);
    printf ("Enter your score ");
    printf ("\nLaboratory (15%%) = ");
    scanf ("%d",&score1);
    printf ("Midterm (35%%) = ");
    scanf ("%d",&score2);
    printf ("Final (50%%) = ");
    scanf ("%d",&score3);
    total = score1+score2+score3;
    printf("Total(100%%) = %d\n", total);

return 0;
}