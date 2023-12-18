// naam daal kar pattern se print karwana horizontel me
#include <stdio.h>
int main()
{
    int p, I;
    char str[27];

    printf("++++++++++++++++++++++++++++++++++\n");
    printf("Enter the  name  :");
    gets(str);

    int n = 9, a = n / 2 + 1, x = n + a;
    int W = n + 1;
    int v = 2, w = n + 1;

    for (int i = 1, ex = 1; i <= n || ex < n + a; i++, ex++)
    {
        for (I = 0; str[I] != '\0'; I++)
        {

            char nam = str[I];
            switch (nam)
            {

            case 'a':

                for (int j = 1; j <= n; j++)
                {
                    if (i <= n && (i == a && j != 1 && j != n && j != n - 1 || (j == 1 || j == n - 2) && i > a && i != n || (i == n && j != 1 && j != n - 2)))
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
                    if ((i <= n && (i > a && (j == 1 || j == n)) || i == a || (j > a && (j - i == a - 1)) || (j <= a && (i + j == a + 1))))

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'b':
                for (int j = 1; j <= n; j++)
                {
                    if ( i<=n&&(j == 1 || i == a && j != n || j == n && i > a && i != n || i == n && j != n))
                        printf("\4");
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'B':
                // B lettter
                for (int j = 1; j <= n; j++)
                {
                    if (i<=n&&((j == 1 || j < n && (i == 1 || i == a || i == n) || j == n && (i > 1 && i != a && i != n))))
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'c':
                for (int j = 1; j <= n; j++)
                {
                    if ( i<=n&&((i == a && j != n || i == n && j != n) && j != 1 || i > a && i != n && j == 1))
                        printf("\4");
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'C':
                // C lettter
                for (int j = 1; j <= n; j++)
                {
                    if( i<=n&& (j == 1 && i > 1 && i != n || (i == 1 || i == n) && j > 1))

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'd':
                for (int j = 1; j <= n; j++)
                {
                    if ( i<=n&&((i == a || i == n) && j != 1 || i > a && i != n && j == 1 || j == n))
                        printf("\4");
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'D':
                // D lettter
                for (int j = 1; j <= n; j++)
                {

                    if( (j == 1 || ((i == 1 || i == n) && (j <= a + 1)) || j - i == a || i + j == n + a + 1 || i == a && i + j == n + a)&&i<=n)
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                break;
            case 'e':

                for (int j = 1; j <= n; j++)
                {
                    if (i<=n&& ((i == a && j < n || i == n) && j != 1 || i > a && ((i != n && j == 1) || i == a / 2 + a || j == n && i == a + 1)))
                        printf("\4");
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'E':
                // E lettter

                for (int j = 1; j <= n; j++)
                {
                    if ( i<=n&& (j == 1 || i == 1 || i == a || i == n))

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'f':
                for (int j = 1; j <= n; j++)
                {
                    if ( i<=n&&(j == a - 2 && j < n - 1 && i != 1 || i == 1 && j >= a - 1 || i == a && j < n))
                        printf("\4");
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'F':
                // F lettter

                for (int j = 1; j <= n; j++)
                {
                    if(i<=n&& (j == 1 || i == 1 || i == a && j < n - 1))

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'G':
                // G lettter
                for (int j = 1; j <= n; j++)
                {
                    if( i<=n&& (j==1&&i>1&&i!=n || (i==1||i==n)&&j>1 || j==n&& i > a || j > a - 1 && i == a))
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                break;
            case 'g':
                // g lettter
                for (int j = 1; j <= n; j++)
                {
                    if( i>=a&& (j==1&&i<=n&&i!=a || j!=1&&i==a || j==n-1&&i!=n || i==n&&j!=n-1 || i==n+a-1||i>=n+2&&(j==1) || i== n+2))
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                break;



            case 'h':
                // h letter
                for (int j = 1; j <= n; j++)
                {
                    if (i<=n&&(j == 1 || i == a && j < n || i > a && j == n))
                        printf("\4");
                    else
                        printf(" ");
                }

                printf("  ");
                break;

            case 'H':
                // H lettter
                for (int j = 1; j <= n; j++)
                {
                    if (i<=n&&(j == 1 || j == n || i == a))
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                //}

                break;

            case 'I':
                // I lettter
                for (int j = 1; j <= n; j++)
                {
                    if(i<=n&& (i == 1 || i == n || j == a))
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'i':

                for (int j = 1; j <= n; j++)
                {
                    if( i<=n&&((i == n || i > a && (j == a + 1 || j == a - 1) || i ==a-1 && (j ==a|| j==a-1 || j==a+1) || i==a-2 && j== a)))
                        printf("\4");
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'j':

                for (int j = 1; j <= 5; j++)
                {
                    if( i==n+a-1 && j!=5|| i==2&&j==5  || i==a || j==5&&i>=a&&i!=n+a-1)
                        printf("\4");
                    else
                        printf(" ");
                }
                printf("  ");
                break;
            case 'J':
                // J lettter
                for (int j = 1; j <= n; j++)
                {
                    if (i<=n&&(i == 1 || j == n && i < n || i == n && j != n || i > a && (i > a / 2 && j == 1)))
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'K':
                // K lettter  incomplete
                for (int j = 1; j <= n; j++)
                {
                    if( i<=n&&(j == 1 || i + j == W || i == a && i + j == n - 1))
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'k':

                for (int j = 1; j <= a; j++)
                {
                    if(i<=n&& (j == 1 || (i == j + 5) || (i + j == 9 && i > 4)))
                    {
                        printf("\4");
                    }
                    else
                    {
                        printf(" ");
                    }
                }

                break;

            case 'l':
                for (int j = 1; j <= n; j++)
                {
                    if (i<=n&&(j == a || i == n && j > 2 && j < n - 1 || j < a && j > 3 && i == 1))
                        printf("\4");
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'L':
                // L lettter
                for (int j = 1; j <= n; j++)
                {
                    if (i<=n&&(j == 1 || i == n))
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                break;
            case 'm':
                // m  letter

                for (int j = 1; j <= n; j++)
                {
                    if (i<=n&&(i >= a && (j == 1 || j == n && i > a || j == a) || i == a && j < n))
                        printf("\4");
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'M':
                // M letter

                for (int j = 1; j <= n; j++)
                {
                    if( i<=n&&(j == 1 || j == n || i <= a && (i == j || i + j == n + 1)))

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'n': // small N
                for (int j = 1; j <= n; j++)
                {
                    if(i<=n&& (i >= a && (j == 1 || j == n && i > a) || i == a && j < n))
                        printf("\4");
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'N':
                // N lettter
                for (int j = 1; j <= n; j++)
                {
                    if(i<=n&& (j == 1 || j == n || i == j))
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'o':
                for (int j = 1; j <= n; j++)
                {
                    if (i<=n&&(i > a && (j == 1 || j == n) && i != n || (i == n || i == a) && j != 1 && j != n))
                        printf("\4");
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'O':
                // O lettter
                for (int j = 1; j <= n; j++)
                {
                    if(i<=n&& ((i == 1 || i == n) && (j > 1 && j != n) || (j == 1 || j == n) && (i > 1 && i != n)))
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'P':
                // P letter
                for (int j = 1; j <= n; j++)
                {
                    if( i<=n&&(j == 1 || (i == 1 && j < n) || (i == a && j < n) || (j == n && (i < a && i != 1))))
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                //  }
                break;
            case 'p':
                // p letter
                for (int j = 1; j <= n; j++)
                {
                    if(i>=a&&(j==1|| i==a&&i!=n || j==n&&i<n|| i==n&&j!=n ))
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                //  }
                break;

            case 'q':
                // p letter
                for (int j = 1; j <= n; j++)
                {
                    if(i>=a&&(j==n|| i==a&&j!=1 || j==1&&i<n&&i!=a|| i==n&&j!=1 ))
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
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
                printf("  ");

                break;

            case 'r':
                for (int j = 1; j <= n; j++)
                {
                    if(i<=n&& (j == 1 && i >= a || i == a + 1 && j == 2 || i == a && j > 2 && j < n || i == a + 1 && j == n))
                        printf("\4");
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'R':
                // R letter
                for (int j = 1; j <= n; j++)
                {
                    if ( i<=n&&(i <= a && (i == 1 && j < n || i == a && j < n || j == n && (i > 1 && i != a)) || j == 1 || (i > a && i == j)))

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'S':
                // S letter
                for (int j = 1; j <= n; j++)
                {
                    if( i<=n&&((j > 1 && (i == 1 || (i == a && j != n))) || (i > 1 && i != n && ((i < a && j == 1) || (i > a && j == n))) || (i == n && j != n)))

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 's':
                for (int j = 1; j <= n; j++)
                {
                    if (i == a && j != 1 || i == a + a / 2 || j == 1 && i > a && i < a + a / 2 || j == n && i > a + a / 2 && i < n || i == n && j != n)
                        printf("\4");
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'T':
                // T letter
                for (int j = 1; j <= n; j++)
                {
                    if (i<=n&&(i == 1 || j == a))

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 't':
                for (int j = 1; j <= n; j++)
                {
                    if (i == n && j > a || j == a - 1 && i < n - 1 || i == a - 2 || i == n - 1 && j == a)
                        printf("\4");
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'U':
                // U letter
                for (int j = 1; j <= n; j++)
                {
                    if( i<=n&&(i <= a + 1 && (j == 1 || j == n) || i > a && (i - j == a || i + j == n + a + 1) || (i == n && j == a)))

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'u':
                for (int j = 1; j <= n; j++)
                {
                    if( i<=n&&(i == n && j != 1 && j != n || i >= a && (j == 1 || j == n) && i != n))
                        printf("\4");
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'V':
                // V letter complete
                for (int j = 1; j <= n; j++)
                {
                    if (i % 2 != 0 && ((j >= a && i + j == w) || (j <= a && i + j == v)))
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'v':
                // letter v
                for (int j = 1; j <= n; j++)
                {
                    if (i >= a && (j <= a && (i - j == a - 1) || j > a && (i + j == n + a)))
                        printf("\4");
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'W':

                for (int j = 1; j <= n; j++)
                {
                    if( i<=n&&(j == 1 || j == n || i >= a && (i + j == n + 1 || i - j == 0)))

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'w':

                for (int j = 1; j <= n; j++)
                {
                    if(i<=n&& (i >= a && (j == 1 || j == n || i == a + a / 2 && j == a || i == a + a / 2 + 1 && (j == a + a / 2 || j == a - a / 2))))
                        printf("\4");
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'x':

                for (int j = 1; j <= n; j++)
                {
                    if (i + j == W && i >= a || i + j == x)
                        printf("\4");
                    else
                        printf(" ");
                }

                printf("  ");

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
                printf("  ");
                break;

            case 'y':
                // p letter
                for (int j = 1; j <= n; j++)
                {
                    if(i>=a &&(i-j==a-1&&i<=n || i+j==n+a))
                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                break;

            case 'Y':
                // Y letter
                for (int j = 1; j <= n; j++)
                {
                    if (i<=n&&(i >= a && j == a || (i < a && (i == j || i + j == n + 1))))

                    {
                        printf("\4");
                    }
                    else
                        printf(" ");
                }
                printf("  ");
                //  }
                break;

            case 'z':
                for (int j = 1; j <= n; j++)
                {
                    if (i == a || i == n || i + j == x)
                        printf("\4");
                    else
                        printf(" ");
                }

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
                printf("  ");
                //  }

                break;

            case ' ':
                printf("  \t  ");

                break;

            default:
                printf("     Enter the correct word : %c ", nam);
            }
        }
        if (i % 2 != 0)
            v += 3, w++;

        if (i < a)
            W--;
        else
            W = W + 3, x--;

        printf("\n");
    }

    str[I] = '\0';
    printf(" \n %s", str);
    return 0;
}