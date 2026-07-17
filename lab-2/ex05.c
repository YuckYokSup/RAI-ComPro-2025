#include<stdio.h>
int main()
{
    float height;
    int age;
    char name[30],un[10], lastname[30];
    printf("Enter your full name: ");
    scanf("%s %s", name, lastname);
    printf("Enter your age: ");
    scanf(" %d", &age);
    printf("Enter your height: ");
    scanf(" %f",&height);
    printf("Enter your University name: ");
    scanf(" %s", un);

    printf("Hi! Everyone. This is %c.%s from %s. I am %d years old and my height is %.1f cm tall.",lastname[0],name,un,age,height);
    


    

    return 0;
}
