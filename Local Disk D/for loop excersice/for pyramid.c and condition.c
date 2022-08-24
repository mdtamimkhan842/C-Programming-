#include <stdio.h>
int main ()
{
int i, n, j, k;

scanf("%d", &n);
for (i=1; i<=n; i++){
for (k=n; k>=i; k--){
printf (" ");
}
for (j=1; j<=i; j++){
if (i==1 || j==1 || i==j || i==n )
printf("*");
else
printf(" ");
}
printf ("\n");
}


return 0;
}
