#include <stdio.h>
int main ()
{
    int i, n, j, k;

    scanf("%d", &n);
    for (i=0; i<=n; i++)
    {
        for (j=0; j<=i; j++)
        {
            if (j<n-i-1 )
                printf(" ");
            else
                printf("*");
        }
        printf ("\n");
    }


    return 0;
}
