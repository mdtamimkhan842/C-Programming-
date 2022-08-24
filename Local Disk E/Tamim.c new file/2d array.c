#include <stdio.h>
int main ()
{
int x[2][3]= {23,22,33,
              55,66,11};
printf ("%d\n", x[0][1]);
int y = x[1][0]+x[1][1];
printf ("%d\n", y);


return 0;
}
