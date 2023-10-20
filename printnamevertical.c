// naam daal kar pattern se print karwana
#include <stdio.h>
char patter(char nam)
{
    int n = 7, a = n / 2 + 1;

    switch (nam)
    {
    case 'A': // A letter
        printf("\n");
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (   (i>a&&(j==1||j==n))   ||   i==a   ||   (j>a&&(j-i==a-1))   ||   (j<=a&&(i+j==a+1))   )

                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }
       break;

    case 'B':
        printf("\n"); // B lettter
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (   j==1 ||   j<n&&(i==1||i==a||i==n)   ||    j==n&&(i>1&&i!=a&&i!=n)  )

                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }

        break;

    case 'C':
        printf("\n"); // C lettter
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (   j==1&&i>1&&i!=n   ||   (i==1||i==n)&&j>1   )

                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }

        break;

    case 'D':
        printf("\n"); // D lettter
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (  j==1  ||   ((i==1||i==n)&&(j<=a+1))   ||   j-i==a   ||   i+j==n+a+1   ||   i==a&&i+j==n+a  )

                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }

        break;

    case 'E':
        printf("\n"); // E lettter
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (  j==1 ||  i==1  ||  i==a  ||   i==n  ) 

                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }

        break;

    case 'F':
        printf("\n"); // F lettter
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (  j==1  ||  i==1  || i==a&&j<n-1  )

                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }

        break;

    case 'G':
        printf("\n"); // G lettter
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (   j==1&&i>1&&i!=n   ||   (i==1||i==n)&&j>1   ||   j==n&&i>a   ||   j>a-1&&i==a   )
                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }

        break;

    case 'H':
        printf("\n"); // H lettter
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (  j==1  ||  j==n  ||  i==a  )
                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }

        break;

    case 'I':
        printf("\n"); // I lettter
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (  i==1 ||  i==n  ||  j==a  )
                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }

        break;

    case 'J':
        printf("\n"); // J lettter
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (  i==1  ||   j==n&&i<n   ||   i==n&&j!=n   ||   i>a&&(i>a/2&&j==1) )
                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }

        break;

    case 'K':
        printf("\n"); // K lettter  incomplete
        int W = n + 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (   j==1   ||   i+j==W  ||   i==a&&i+j==n-1  )
                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            if (i < a)
                W--;
            else
                W = W + 3;
            printf("\n");
        }

        break;

    case 'L':
        printf("\n"); // L lettter
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (  j==1 || i==n  )
                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }

        break;

    case 'M':
        printf("\n"); // M letter
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (  j==1   ||  j==n   ||   i<=a&&(i==j||i+j==n+1)  )

                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }

        break;

    case 'N':
        printf("\n"); // N lettter
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (  j==1  ||  j==n  ||  i==j  )
                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }

        break;

    case 'O':
        printf("\n"); // O lettter
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (  (i==1||i==n) && (j>1&&j!=n)   ||   (j==1||j==n) && (i>1&&i!=n)  )
                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }

        break;

    case 'P':
        printf("\n"); // P letter
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (   j==1 || (i==1&&j<n)  ||   (i==a&&j<n)   ||   (j==n&&(i<a&&i!=1))  )
                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }
        break;

    case 'Q':
        printf("\n"); //  Q letter
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (  (i==1||i==n-1)&&(j>1&&j!=n)   ||   (j==1||j==n)&&(i!=1&&i<n-1)   ||   i>a&&i==j  )

                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }
        break;

    case 'R':
        printf("\n"); // R letter
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (   i<=a&&(i==1&&j<n||i==a&&j<n||j==n&&(i>1&&i!=a))   ||   j==1   ||   (i>a&&i==j)  )

                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }
        break;

    case 'S':
        printf("\n"); // S letter
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if(  ( j>1 && (i==1||(i==a&&j!=n)) )  ||   (  i>1&&i!=n&&( (i<a&&j==1) || (i>a&&j==n) ))   ||    (i==n&&j!= n)  )

                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }
        break;

    case 'T':
        printf("\n"); // T letter
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (  i == 1 || j == a )
                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }
        break;

    case 'U':
        printf("\n"); // U letter
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (   i<=a+1 && (j==1||j==n) ||  i>a&&(i-j==a||i+j==n+a+1)  ||   (i==n&&j==a)  )
                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }
        break;

    case 'V':
        printf("\n"); // V letter incomplete
        int v = 2, w = n + 1;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (  i%2!=0&&( (j>=a&&i+j==w) || (j<=a&&i+j==v) )  )
                {
                    printf("\4");
                }
                else
                    printf(" ");
            }

            if (i % 2 != 0)
                v += 3, w++;
            printf("\n");
        }
        break;

    case 'W':
        printf("\n"); // W letter
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (   j==1  ||  j==n  ||  i>=a && (i+j==n+1||i-j==0)  )

                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }
        break;

    case 'X':
        printf("\n"); // Y letter
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (  i==j  ||  i+j==n+1  )

                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }
        break;

    case 'Y':
        printf("\n"); // Y letter
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (  i>=a&&j==a  ||   (i<a && (i==j||i+j==n+1) )   )

                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }
        break;

    case 'Z':

        printf("\n"); // Z lettter
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (  i==1  ||   i==n   ||   i+j==n+1  )
                {
                    printf("\4");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }

        break;

    case ' ':
        printf("\n\n\n\n\n\n\n\n\n\n");

        break;

    default:
        printf(" \n  Enter the correct word : %c ", nam);
    }
    return 0;
}
int main()
{
    int p, i;
    char str[27];
    printf("Enter the  Capital letter name  :");
    // scanf("%s", &str);
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {

        patter(str[i]);
    }
    str[i] = '\0';
    printf(" \n%s", str);

    return 0;
}
