#include <stdio.h>
#include  <string.h>

int main ()
{
char a[]= "Dhaka";
char b[]="Dhaka";

int x = strcmp(a,b);
if (x == 0){
printf ("a and b is equal:");
}else {
printf ("a and b is not equal: ");
}
return 0;
}
