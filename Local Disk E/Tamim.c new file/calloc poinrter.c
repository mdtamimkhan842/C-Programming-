#include <stdio.h>
#include <stdlib.h>

int main ()
{
int *p;
p= (int *)calloc (5,4);
if (p==NULL){
printf ("memory allocated not successful");
}else{
printf ("memory allocated successful");
}


return 0;
}
