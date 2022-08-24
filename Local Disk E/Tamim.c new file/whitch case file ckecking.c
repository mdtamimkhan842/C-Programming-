#include <stdio.h>
int main ()
{
int x;
printf ("enter the value x is:\n");
scanf ("%d", &x);

switch (x){
case 1:
printf ("value is : Hi\n");
break;
case 2:
printf ("value is : Hello\n");
break;
case 3:
printf ("value is : Good boy\n");
break;
default :
printf ("value is : Unknow\n");

}


return 0;
}
