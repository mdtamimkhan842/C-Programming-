#include <stdio.h>
#include <stdlib.h>

int main ()
{
int *p1, *p2;
p1= (int *)malloc (20);
p2= (int *)calloc (5,4);
if (p1==NULL || p2==NULL){
printf ("memory allocated not successful\n");
}else{
printf ("memory allocated successful\n");
}
p1=realloc (p1, 50);
printf ("memory reallocation  successful\n");

return 0;
}
