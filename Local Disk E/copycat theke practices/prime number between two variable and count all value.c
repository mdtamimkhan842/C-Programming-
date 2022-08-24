#include <stdio.h>
int main ()
{
    int a, b, k, t, i, j;
    scanf("%d %d", &a, &b);

        while(a<b)
        {
            k=0;
            if (a<=1)
                ++a;
            continue;

            if (a==0 || a==1)
                k++;
            for (i=2; i<=a/2; i++)
            {
                if (a%i==0)
                    k++;
                    break;

        }

    if (k==0)
        printf("%d\n", a);
    ++a;
    }

    return 0;
}
