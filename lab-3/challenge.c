#include<stdio.h>
int main()
{
    char grade , grade1 , grade2 , grade3;
    double gpa , score1 , score2 , score3 , grade11 , grade22 , grade33;
    printf ("Calculus score: ");
    scanf ("%lf",&score1);
    if(100 >= score1 && score1 >= 80){
        grade1 = 'A';
        grade11 = 4.0;}
    else if(80 >= score1 && score1 >= 70)
        {
        grade1 = 'B';
        grade11 = 3.0;
        }
    else if(70 >= score1 && score1 >= 60)
        {
        grade1 = 'C';
        grade11 = 2.0;
        }
    else if(60 >= score1 && score1 >= 50)
        {
        grade1 = 'D';
        grade11 = 1.0;
        }
    else if(50 >= score1 && score1 >= 0)
        {
        grade1 = 'F';
        grade11 = 0.0;
        }

    printf ("Physic score: ");
    scanf ("%lf",&score2);
    if(100 >= score2 && score2 >= 80)
        {
        grade2 = 'A';
        grade22 = 4.0;
        }
    else if(80 >= score2 && score2 >= 70)
        {
        grade2 = 'B';
        grade22 = 3.0;
        }
    else if(70 >= score2 && score2 >= 60)
        {
        grade2 = 'C';
        grade22 = 2.0;
        }
    else if(60 >= score2 && score2 >= 50)
        {
        grade2 = 'D';
        grade22 = 1.0;
        }
    else if(50 >= score2 && score2 >= 0)
        {
        grade2 = 'F';
        grade22 = 0.0;
        }

    printf ("compro score: ");
    scanf ("%lf",&score3);

    if(100 >= score3 && score3 >= 80)
        {
        grade3 = 'A';
        grade33 = 4.0;
        }
    else if(80 >= score3 && score3 >= 70)
        {
        grade3 = 'B';
        grade33 = 3.0;
        }
    else if(70 >= score3 && score3 >= 60)
        {
        grade3 = 'C';
        grade33 = 2.0;
        }
    else if(60 >= score3 && score3 >= 50)
        {
        grade3 = 'D';
        grade33 = 1.0;
        }
    else if(50 >= score3 && score3 >= 0)
        {
        grade3 = 'F';
        grade33 = 0.0;
        }

    printf("Subject   Score   Grade   Grade\n");
    printf("-------------------------------\n");
    printf("Cal     %7.2f   %c       %.1f\n",score1,grade1,grade11);
    printf("Physic    %5.2f   %c       %.1f\n",score2,grade2,grade22);
    printf("compro    %5.2f   %c       %.1f\n",score3,grade3,grade33);

    gpa = (grade11 + grade22 + grade33)/3;

    printf("\nGPA: %.2f\n", gpa);
return 0;
}