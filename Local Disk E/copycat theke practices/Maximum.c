
#include <stdio.h>
int main ()
{
    int N, i, max;
    scanf("%d", &N);
    int arr[N];
    for (i=1; i<=N; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]>max)
            max= arr[i];

    }
    printf("%d\n", max);


    return 0;
}
