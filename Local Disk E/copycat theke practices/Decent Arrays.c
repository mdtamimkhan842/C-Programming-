#include <stdio.h>
int main ()
{
int N, c=0, i;
scanf("%d", &N);

for (i=1; i<=N; i++){
    if (N%i==0)
        c++;
}
printf("%d\n", c);

return 0;
}

