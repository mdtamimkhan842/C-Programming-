#include <stdio.h>
int main ()
{
int i, j, n;
printf ("Enter a value:");
scanf ("%d", &n);

for (i=2; i<=n; i++){//10, 3-10
for (j=2; j<=i; j++){
if (i%j==0) //3, 5, 7
break;
}
if (i==j){
printf ("%d\n", i);
}
}

return 0;
}
