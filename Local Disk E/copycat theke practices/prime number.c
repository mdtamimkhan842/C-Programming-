#include <stdio.h>
int main ()
{
    int N, i, k=0;

    scanf("%d", &N);//9

        if ( N==1 || N==0)//9==1,
            k=1;//1

    for(i=2; i<=N/2; ++i)//2 3 4 5
    {
        if(N%i==0)//
            k=1;
             break;
    }
    if(k == 0)
        printf("Yes");
    else
        printf("No");

    return 0;
}

