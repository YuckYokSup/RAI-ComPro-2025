#include<stdio.h>
int main()
{
    float ch,cr,cv;
    printf("Enter cone height : ");
    scanf("%f",&ch);
    printf("Enter cone base radius : ");
    scanf("%f",&cr);

    cv = 3.14159*cr*cr*ch/3;
    printf("Cone volume = %.1f\n",cv);
        
    if (cv > 260){
        printf("this cone is perfect for Supun project\n");
    }
    else{
        printf("this cone is not fit for this project\n");

    }
    return 0;
}