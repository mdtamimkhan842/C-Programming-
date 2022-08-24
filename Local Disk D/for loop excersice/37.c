#include <stdio.h>
int main ()
{
int i,j,k,n;
//scanf ("%d", &n);

for(i=1; i<=10; i++){
for (k=1; k<=i; k++){
printf(" ");
}
for (j=1; j<=10; j++){
printf("*");
}
printf ("\n");
}

return 0;
}
