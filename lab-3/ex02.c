#include<stdio.h>
int main()
{
    int num1;
    printf("Enter a number : ");
    scanf("%d",&num1);
    if (num1 % 2 == 0 && 100 >=num1 && num1 >= 1){
        printf("%d is even\n",num1);
    }
    else if(num1 % 2 == 1 && 100 >=num1 && num1 >= 1){
        printf("%d is odd\n",num1);
    }
    else {
        printf("%d is out of range.\n", num1);
    }
    return 0;
}