#include <stdio.h>
int add(int *a,  int size);
int i;
int sum =0;
for( i=0; i<size; i++){
sum = sum + *(a+i);
}
return sum;

int main ()
{
int array [3]={5,4 ,19};
int result = add (array, 3);
printf ("sum is : %d\n", result);
return 0;
}
