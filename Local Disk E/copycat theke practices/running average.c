#include <stdio.h>
int main ()
{
    int N, i, sum=0,  j;
    float average;

    for (j=1; j<100; j++);

    scanf("%d", &N);

    for (i=1; i<N; i++)
    {

        sum= sum+i;
        average= sum/N;
    }
    printf("%0.10f\n", average);

    return 0;
}
