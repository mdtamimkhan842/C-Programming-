#include <stdio.h>
int main ()
{
int a;
printf ("enter the value is :");
scanf ("%d", &a);

if (a % 3== 0 || a % 5 == 0){
printf ("the value is diviables\n");
}else {
printf ("the value is not diviables\n");
}


return 0;
}
