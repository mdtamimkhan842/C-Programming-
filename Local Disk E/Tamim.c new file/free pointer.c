#include <stdio.h>
#include <stdlib.h>

int main ()
{
int *p;
p= (int *)malloc (20);
if (p==NULL){
printf ("memory allocated not successful\n");
}else{
printf ("memory allocated successful\n");
}
free (p);
printf ("memory freed successfully\n");

return 0;
}
