#include<stdio.h>
int main()
{
    float pro,phys,cal,gpa;
    char name[30],id[10];
    printf("Enter your Name: ");
    scanf("%s", name);
    printf("Enter your student ID: ");
    scanf("%s", id);
    printf("Enter your Programming score: ");
    scanf("%f",&pro);
    printf("Enter your Physics score: ");
    scanf("%f",&phys);
    printf("Enter your Calculus score: ");
    scanf("%f",&cal);
    gpa = (pro + phys + cal)/3;

    printf("Hi %s(%s)! Your GPA is %.2f\n",name,id,gpa);
    


    

    return 0;
}
