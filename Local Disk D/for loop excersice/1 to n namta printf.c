#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    int i, j, n, k;

    scanf ("%d", &n);
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=10; j++)
        {
            k= i*j;
                    printf ("%d * %d = %d\n", i,j,k);

        }
        printf ("\n\n");
    }
    return 0;
}
