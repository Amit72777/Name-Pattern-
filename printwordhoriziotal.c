// naam daal kar pattern se print karwana horizontel me
#include <stdio.h>
int main()
{
    int p, I;
    char str[27];

    printf("Enter the  Capital letter name  :");
    gets(str);

    int n = 7, a = n / 2 + 1;
    int W = n + 1;
    int v = 2, w = n + 1;

    for (int i = 1; i <= n; i++)
    {
        for (I = 0; str[I] != '\0'; I++)
        {

            char nam = str[I];
            switch (nam)
            {


            case 'a':

                for (int j = 1; j <= n; j++)
                {
                    if (i == a && j != 1 && j != n && j != n - 1 || (j == 1 || j == n - 2) && i > a && i != n || (i == n && j != 1 && j != n - 2))
                        printf("\4");
                    else
                        printf(" ");
                }
                printf("  ");
                // small a lettter
                break;

            case 'A': // A letter
                for (int j = 1; j <= n; j++)
                {
                    if (  (i>a && (j==1||j==n))  ||   i == a  ||   (j>a && (j-i==a-1))  ||   (j<=a && (i+j==a+1))   )

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                break;

            case 'B':
                // B lettter
                for (int j = 1; j <= n; j++)
                {
                    if (   j==1   ||   j<n && (i==1||i==a||i==n)   ||   j==n && (i>1&&i!=a&&i!= n)   )
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                break;

            case 'C':
                // C lettter
                for (int j = 1; j <= n; j++)
                {
                    if (j == 1 && i > 1 && i != n || (i == 1 || i == n) && j > 1)

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                break;

            case 'D':
                // D lettter
                for (int j = 1; j <= n; j++)
                {

                    if (j == 1 || ((i == 1 || i == n) && (j <= a + 1)) || j - i == a || i + j == n + a + 1 || i == a && i + j == n + a)

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                break;

            case 'E':
                // E lettter

                for (int j = 1; j <= n; j++)
                {
                    if (j == 1 || i == 1 || i == a || i == n)

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                break;

            case 'F':
                // F lettter

                for (int j = 1; j <= n; j++)
                {
                    if (j == 1 || i == 1 || i == a && j < n - 1)

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                break;

            case 'G':
                // G lettter
                for (int j = 1; j <= n; j++)
                {
                    if (j == 1 && i > 1 && i != n || (i == 1 || i == n) && j > 1 || j == n && i > a || j > a - 1 && i == a)
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                break;

            case 'H':
                // H lettter
                for (int j = 1; j <= n; j++)
                {
                    if (j == 1 || j == n || i == a)
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                //}

                break;

            case 'I':
                // I lettter
                for (int j = 1; j <= n; j++)
                {
                    if (i == 1 || i == n || j == a)
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                break;

            case 'J':
                // J lettter
                for (int j = 1; j <= n; j++)
                {
                    if (i == 1 || j == n && i < n || i == n && j != n || i > a && (i > a / 2 && j == 1))
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                break;

            case 'K':
                // K lettter  incomplete
                for (int j = 1; j <= n; j++)
                {
                    if (j == 1 || i + j == W || i == a && i + j == n - 1)
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                break;

            case 'L':
                // L lettter
                for (int j = 1; j <= n; j++)
                {
                    if (j == 1 || i == n)
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                break;

            case 'M':
                // M letter

                for (int j = 1; j <= n; j++)
                {
                    if (j == 1 || j == n || i <= a && (i == j || i + j == n + 1))

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                break;

            case 'N':
                // N lettter
                for (int j = 1; j <= n; j++)
                {
                    if (j == 1 || j == n || i == j)
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                break;

            case 'O':
                // O lettter
                for (int j = 1; j <= n; j++)
                {
                    if ((i == 1 || i == n) && (j > 1 && j != n) || (j == 1 || j == n) && (i > 1 && i != n))
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                break;

            case 'P':
                // P letter
                for (int j = 1; j <= n; j++)
                {
                    if (j == 1 || (i == 1 && j < n) || (i == a && j < n) || (j == n && (i < a && i != 1)))
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                //  }
                break;

            case 'Q':
                //  Q letter
                for (int j = 1; j <= n; j++)
                {
                    if ((i == 1 || i == n - 1) && (j > 1 && j != n) || (j == 1 || j == n) && (i != 1 && i < n - 1) || i > a && i == j)

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");

                break;

            case 'R':
                // R letter
                for (int j = 1; j <= n; j++)
                {
                    if (i <= a && (i == 1 && j < n || i == a && j < n || j == n && (i > 1 && i != a)) || j == 1 || (i > a && i == j))

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                break;

            case 'S':
                // S letter
                for (int j = 1; j <= n; j++)
                {
                    if ((j > 1 && (i == 1 || (i == a && j != n))) || (i > 1 && i != n && ((i < a && j == 1) || (i > a && j == n))) || (i == n && j != n))

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                break;

            case 'T':
                // T letter
                for (int j = 1; j <= n; j++)
                {
                    if (i == 1 || j == a)

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                break;

            case 'U':
                // U letter
                for (int j = 1; j <= n; j++)
                {
                    if (i <= a + 1 && (j == 1 || j == n) || i > a && (i - j == a || i + j == n + a + 1) || (i == n && j == a))

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                break;

            case 'V':
                // V letter incomplete
                for (int j = 1; j <= n; j++)
                {
                    if (i % 2 != 0 && ((j >= a && i + j == w) || (j <= a && i + j == v)))
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                break;

            case 'W':

                for (int j = 1; j <= n; j++)
                {
                    if (j == 1 || j == n || i >= a && (i + j == n + 1 || i - j == 0))

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                break;

            case 'X':
                // Y letter
                for (int j = 1; j <= n; j++)
                {
                    if (i == j || i + j == n + 1)

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                break;

            case 'Y':
                // Y letter
                for (int j = 1; j <= n; j++)
                {
                    if (i >= a && j == a || (i < a && (i == j || i + j == n + 1)))

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                //  }
                break;

            case 'Z':
                // Z lettter
                for (int j = 1; j <= n; j++)
                {
                    if (i == 1 || i == n || i + j == n + 1)
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("\t");
                //  }

                break;

            case ' ':
                printf("\t\t");

                break;

            default:
                printf(" \t  Enter the correct word : %c ", nam);
            }
        }
        if (i % 2 != 0)
            v += 3, w++;

        if (i < a)
            W--;
        else
            W = W + 3;
        printf("\n");
    }

    str[I] = '\0';
    printf(" \n %s", str);
    return 0;
}
