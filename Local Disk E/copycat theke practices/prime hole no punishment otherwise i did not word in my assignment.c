#include <stdio.h>
int main ()
{
int n, i, c=0, j;
scanf("%d", &n);
if(n==0 || n==1)
    c++;

for (i=2; i<=n; i++){
    if (n%i==0)
    c++;
        break;
}
if (c==0)
    printf("NO PUNISHMENT");
else
for (j=1; j<=n; j++){
    printf("I DID NOT DO THE ASSIGNMENT.\n");
}
return 0;
}
