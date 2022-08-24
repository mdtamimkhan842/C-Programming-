#include <stdio.h>
int main ()
{
    int a, b, c;

    for (a=1; a<=3; a++)
    {
        printf ("Hi\n" );

        for (b=1; b<=6; b++)
        {
            printf ("Hello\n");

            for (c=1; c<=9; c++)
            {
                printf ("good bye\n");
            }
        }
    }
    return 0;
}
