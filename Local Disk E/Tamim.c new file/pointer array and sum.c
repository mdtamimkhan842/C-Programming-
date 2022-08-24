#include <stdio.h>
int main ()
{
int x[5]= {1,2,3,4,5};
int i, sum=0;
for (i=0; i<5; i++){
sum= sum +*(i+x);
}
printf ("Sum is : %d\n", sum);
return 0;
}
