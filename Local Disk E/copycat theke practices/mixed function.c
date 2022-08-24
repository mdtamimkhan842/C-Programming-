#include <stdio.h>
int main ()
{
int z, N, D, x, y;

scanf("%d %d", &N, &D);//11 5

x= N%D; //1
y= N/D;//2
z= x+y*D; //11

printf("%d %d %d\n", y, x, D);
return 0;
}
