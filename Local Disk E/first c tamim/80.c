#include <stdio.h>
int main ()
{
int x[3][5] = {23,25,23,25,36,
            25,56,45,56,23,
            44,25,36,45,26};

            printf("%d\n", x[1][1]);
int y = x[0][3]+ x[2][4];
printf ("enter the values: %d\n", y);
            return 0;
}
