#include<stdio.h>
int main()
{
    int a, n = 2;
    scanf_s("%d", &a);
    while (a != 1)
    {
        while (a % n == 0)
        {
            printf("%d\n", n);
            a = a / n;
        }
        n++;
    }
    return 0;
}