#include <stdio.h>
int main ()
{
    FILE *fp;
    fp = fopen("donation taxt", 'w+');
    int i, donation =0;
    char name [20];
    for(i =0; i<5; i++)
    {
        printf ("enter your name\n");
        scanf ("%s", &name);

        printf ("enter your amount\n");
        scanf ("%d", &donation);

        fprintf (fp, "%s %d\n", name, donation);

    }

    return 0;
}
