#include <stdio.h>
int main ()
{
int i, j, k, l, m,n;

scanf ("%d", &n);

for(i=1; i<=n; i++){
for(k=n; k<=i; k++){
printf(" ");
}
for (j=n; j>=i; j--){
printf("*");
}
for (m=n; m>=i; m--){
printf("*");
}
printf("\n");
}


return 0;
}
