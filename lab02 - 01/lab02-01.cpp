#include<stdio.h>
int main()
{
    int a, n = 2;
    printf("Enter number :");
    scanf_s("%d", &a);
    printf("Factoring Result :");
    while (a != 1)
    {
        while (a % n == 0)
        {
            printf("%d ", n);
            a = a / n;
        }
        n++;
    }
    return 0;
}