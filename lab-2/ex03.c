#include<stdio.h>
int main()
{
    int age,weight;
    float height;
    char name[30],gender[2],EQ[40];
    printf("Enter your Name: ");
    scanf("%s", name);
    printf("Enter your Age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your weight: ");
    scanf("%d", &weight);
    printf("Enter your gender: ");
    scanf("%s", gender);
    printf("Enter your educational qualification: ");
    scanf(" %[^\n]", EQ);


    printf("\nName : %s\n",name);
    printf("Age : %d\n", age);
    printf("Gender : %s\n", gender);
    printf("Height : %.1f\n", height);
    printf("Weight : %d\n", weight);
    printf("Educational Qualification : %s\n", EQ);

    return 0;
}
