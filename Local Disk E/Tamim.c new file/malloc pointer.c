#include <stdio.h>
#include <stdlib.h>

int main ()
{
int *p;
p= (int *)malloc (20);
if (p==NULL){
printf ("memory allocated not successful");
}else{
printf ("memory allocated successful");
}


return 0;
}
