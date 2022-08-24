#include <stdio.h>
#include <conio.h>
int main ()
{
int i,j, k=1, n, l=n-1, m;
scanf ("%d", &n);

for (i=1; i<=n*2; i++){
        for (m=1; m<=l; m++){
            printf(" ");
        }
for (j=1; j<=k; j++){
printf("*");
}
if (i<n){
k++;
l--;
}else{
k--;
l++;
}
printf("\n");
}


return 0;
}

