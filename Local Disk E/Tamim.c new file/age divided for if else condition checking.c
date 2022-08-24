#include <stdio.h>
int main ()
{
int x;
printf("enter your age x is: \n");
scanf ("%d", &x);

if (x<2){
printf ("infant\n");
}else if (x>=2 && x<10){
printf ("child\n");
}else if (x>=10 && x<20){
printf ("teenage\n");
}else if (x>=20 && x<30){
printf ("adult\n");
}else {
printf ("old");
}
return 0;
}
