#include <stdio.h>
int main ()
{
int i, j, n,k=1;

scanf("%d", &n);

for (i=1; i<=n; i++){ // 1, 2, 3
for (j=1; j<=i; j++){ //1, 1 2, 1 2 3
printf("%d ", k++);
}
printf("\n");

}

return 0;
}
