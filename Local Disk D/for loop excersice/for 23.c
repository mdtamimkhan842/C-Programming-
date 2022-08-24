#include <stdio.h>
#include <conio.h>
int main ()
{
int i,j, k=1, n;
scanf ("%d", &n);

for (i=1; i<=n*2; i++){
for (j=1; j<=k; j++){
printf(" *");
}
if (i<n){
k++;
}else{
k--;
}

printf("\n");
}


return 0;
}
