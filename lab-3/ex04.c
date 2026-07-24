#include<stdio.h>
int main()
{
    char name[40],grade;
    float score1 , score2 , score3  ,avg;
    printf ("Enter your Name  : ");
    scanf ("%[^\n]",name);
    printf ("Enter your Calculus score: ");
    scanf ("%f",&score1);

    printf ("Enter your Physic score: ");
    scanf ("%f",&score2);

    printf ("Enter your Science score: ");
    scanf ("%f",&score3);

    avg = (score1 + score2 + score3) / 3;

    if(100 >= avg && avg >= 80)
        grade = 'A';
    else if(80 >= avg && avg >= 70)
        grade = 'B';
    else if(70 >= avg && avg >= 60)
        grade = 'C';
    else if(60 >= avg && avg >= 50)
        grade = 'D';
    else if(50 >= avg && avg >= 0)
        grade = 'F';

    printf("%s, your average is %.2f. You got grade %c.\n",name,avg,grade);
return 0;
}