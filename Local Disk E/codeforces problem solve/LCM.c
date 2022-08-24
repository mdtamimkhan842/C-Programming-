#include <stdio.h>
int main ()
{
    long long int l, r, max, lcm=1, i;
    int T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lld %lld", &l, &r);// 6 9

        max = (l>r) ? l: r;//9
        for (i=max; ; i++) //9
        {
            if(i%l==0 && i%r==0) //
            {
                lcm=i;
                break;
            }
        }

        printf("%lld", lcm);
    }

    return 0;
}
