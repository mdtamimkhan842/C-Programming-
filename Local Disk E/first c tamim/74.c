#include <stdio.h>
int main ()
{
int a[6]= {-45,100,45,365,-563,888};

int  max = a [0], i;

for (i=1; i<6; i++){
if (a[i]> max)
max = a[i];
}

printf ("the values of max: %d\n", max);
return 0;
}
