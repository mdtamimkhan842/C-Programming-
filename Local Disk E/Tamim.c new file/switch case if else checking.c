#include <stdio.h>
int main ()
{
char x;
printf ("enter the value x is:\n");
scanf ("%c", &x);

switch (x){
case 'a':
printf ("value is : Hi\n");
break;
case 'b':
printf ("value is : Hello\n");
break;
case 'c':
printf ("value is : Good boy\n");
break;
default :
printf ("value is : Unknow\n");

}


return 0;
}
