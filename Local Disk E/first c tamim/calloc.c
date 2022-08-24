#include <stdio.h>
#include <stdlib.h>
int main ()
{
int *ptr;
//ptr = (int *)malloc (20);
ptr = (int *)calloc (5, sizeof (int));

if(ptr == NULL){
printf ("memory not allocated\n");
}else{
printf ("memory is successfully\n");
}
return 0;
}
