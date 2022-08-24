#include <stdio.h>
int sum (int *a, int size){
int i, sum=0;
for (i=0; i<size; i++){
sum = sum + *(a+i);
}
return sum;
}

int main ()
{
int array [3] = {30,40,50};
int result = sum (array, 3);
printf ("enter the sum is array: %d\n", result);

return 0;
}
