#include<stdio.h>
#include<stdbool.h>
int main()
{
    int num1;
    printf("Enter a number : ");
    scanf("%d",&num1);

    switch(num1 >= 1 && num1<=100){
        case true:
            switch(num1 % 2){
                case 0:
                    printf("%d is even\n",num1);
                    break;
                case 1:
                    printf("%d is odd\n",num1);
                    break;
            }
            break;
        case false:
            printf("%d is out of range\n",num1);
            break;
    }
    return 0;
}