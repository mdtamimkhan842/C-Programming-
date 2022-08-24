#include <stdio.h>
#define cycle 5
#include <unistd.h>
#include <conio.h>
#define clrscr() printf("\e[1;1H\e[2J")
int main ()
{
    int second=0, minute =0, hour =0;
    printf ("enter the hour, minute, second\n");
    scanf ("%d%d%d", &hour, &minute, &second);
    clrscr ();
    int h=0, m=0, s=0;
    while (1)
    {
        printf ("\n\n*******************stop watch*****************\n\n");
        printf ("%.2d:%.2d:%.2d\n", h, m, s);
        printf ("\n\n************************************************\n\n");
        if (h==hour && m==minute && s==second)
        {
            break;
        }
        else
        {
            clrscr();
        }
        s++;
        sleep(1);
        if (s==cycle)
        {
            m++;
            s=0;
        }
        if (m== cycle)
        {
            h++;
            m=0;
        }
    }








    return 0;
}
