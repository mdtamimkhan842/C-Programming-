#include <stdio.h>
int main ()
{
int x[5]= {1,2,3,4,5};
int i;
for (i=0; i<5; i++){
printf ("%u\n", &x[i]);
}
return 0;
}
