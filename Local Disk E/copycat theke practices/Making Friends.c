#include <stdio.h>
int main ()
{
    long long int N, sum=0, i, count=0;
    scanf("%lld", &N);

    for (i=1; i<N; i++)
    {
        if (N%i==0)// 1, 2,3
            count++;
        printf("%lld\n", count);

    }


    return 0;
}
