#include <stdio.h>
#include <stdlib.h>
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
    char b[20];
    while(1)
    {
        int code = fscanf (fp, "&s", b);
        if(code == EOF)
        {
            break;
            printf ("%s", b);
        }
        int code = fscanf (fp, "&s", b);
        if (code == EOF)
        {
            break;
            printf ("%s\n", b);
        }
        sum = sum + atoi(b);
    }
    printf ("total donation: %d\n");

}
return 0;
}
