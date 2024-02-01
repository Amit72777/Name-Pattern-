#include <stdio.h>
int main()
{
    int n, a;
    printf("Enter the number :");
    scanf("%d", &n);
    a = n / 2 + 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i < a && (i + j == a + 1 || j - i == a - 1)) || (i >= a && (j == 1 || j == n || i == a)))
                printf("*");
            else
                printf(" ");
        }
        printf("\t\t");
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || (i <= a && (i == j || i + j == n + 1)))
                printf("*");
            else
                printf(" ");
        }

        printf("\t\t");

        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == a || i == n)
                printf("*");
            else
                printf(" ");
        }

        printf("\t\t");
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == a)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }
}