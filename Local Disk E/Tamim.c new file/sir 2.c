#include <stdio.h>
int main ()
{
    int i, j;
    printf ("Enter the value: ");
    scanf ("%d%d", &i, &j);
    if (i>j)
    {
        printf ("Maximum values: %d\n", i);
    }else{
   printf (" maximum values: %d\n", j);
    }
    return 0;
}
