#include<stdio.h>
int main()
{
    char name[40] , id[8];
    int score;
    printf ("Enter your Name Surname : ");
    scanf ("%[^\n]",name);
    printf ("Enter your student ID : ");
    scanf ("%s",id);
    printf ("Enter your score : ");
    scanf ("%d",&score);
    if(100 >= score && score >= 90)
        printf("Grade A\n");
    else if(89.99 >= score && score >= 80)
        printf("Grade B\n");
    else if(79.99 >= score && score >= 70)
        printf("Grade C\n");
    else if(69.99 >= score && score >= 60)
        printf("Grade D\n");
    else
        printf("Grade F\n");

return 0;
}