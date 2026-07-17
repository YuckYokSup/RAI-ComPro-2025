#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter integer #1: ");
    scanf("%d",&n1);
    printf("Enter integer #2: ");
    scanf("%d",&n2);
    printf("Enter integer #3: ");
    scanf("%d",&n3);

    printf("\nResults:\n");
    printf("Minimum: %d\n", (n1<n2 && n1<n3)? n1 : (n2<n3)? n2 : n3);
    printf("Maximum: %d\n", (n1>n2 && n1>n3)? n1 : (n2>n3)? n2 : n3);   
    printf("Sum: %d\n", n1+n2+n3);
    printf("Average: %.2f\n", (n1+n2+n3)/3.0);

    return 0;
}
