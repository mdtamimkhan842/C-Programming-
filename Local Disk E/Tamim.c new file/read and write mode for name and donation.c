#include <stdio.h>
int main ()
{
    FILE *pt;
    pt= fopen ("donation.txt", "w+");
    int i, donation=0;
    char name;
    for (i=0; i<5; i++)
    {
        printf ("enter your name:\n ");
        scanf ("%s", &name);

        printf ("enter amount:\n");
        scanf ("%d\n", &donation);

        fprintf (pt, "%s, %d\n", name, donation);
    }
    return 0;
}
