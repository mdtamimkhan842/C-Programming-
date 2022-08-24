#include <stdio.h>
int main ()
{
    int i, j, k, n, m;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            printf("*");
        }
        for (k=1; k<=(2*i-2); k++)
        {
            printf(" ");
        }
        for (m=i; m<=n; m++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        for(k=(2*i-2); k<(2*n-2); k++)
        {
            printf(" ");
        }
        for (m=1;m<=i; m++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
