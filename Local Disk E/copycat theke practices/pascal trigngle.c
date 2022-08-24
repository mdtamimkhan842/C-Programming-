#include <stdio.h>
int main ()
{
int N, i, j, k;
scanf("%d", &N);

for (i=2; i<=N; i++){
for (j=N; j>=i; j--){
printf(" ");
}
for (k=1; k<=i; k++){
        if(i==1||j==1||i==N||j==N)
printf(" %d ", j);
}
printf("\n");
}


return 0;
}
