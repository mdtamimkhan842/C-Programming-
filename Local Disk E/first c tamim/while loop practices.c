#include <stdio.h>
int main ()
{
    int i, n;
    while (1)
    {
        printf ("\n enter the of N [input -1 to stop]:\n");
        scanf ("%d\n");

        if(n == -1)
            break;
        if (n>-32)
        {

            for (i=n; i>=-32; i--);
            printf ("%d\n", i);


        }
        else
        {
            for (i=n; i<=-32; i++)
            {
                printf ("%d\n", i);
            }
        }
    }
    return 0;
}

