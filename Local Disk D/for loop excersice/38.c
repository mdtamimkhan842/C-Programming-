#include <stdio.h>
int main ()
{
int i,j,k, n;
scanf("%d", &n);
for (i=1; i<=n; i++){
        for (k=n; k>=i; k--){
            printf(" ");
        }
for (j=1; j<=i; j++){
        if(i==1||j==i|| j==1|| i==n)
printf("*");
else
    printf(" ");
}
printf("\n");
}

return 0;
}
