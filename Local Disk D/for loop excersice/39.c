#include <stdio.h>
int main ()
{
    int i,j,k, n;
    scanf("%d", &n);
    for (i=1; i<=n; i++)  //1. 2, 3.4, 5
    {
        for (j=i; j<=n; j++) //1 2 3 4 5, 1 2 3 4, 1 2 3, 1 2, 1
        {
            if(i==1|| j==1|| j==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
