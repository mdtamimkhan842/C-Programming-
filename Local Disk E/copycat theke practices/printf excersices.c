#include <stdio.h>
int main ()
{
    int i, N, j;
    scanf ("%d", &N);
    for (i=5; i<=N; i--)
    {
        for (j=1; j<=5; j--)
        {

            printf ("*");
            //printf ("\t");
        }
        printf ("\n");
    }

    return 0;
}
