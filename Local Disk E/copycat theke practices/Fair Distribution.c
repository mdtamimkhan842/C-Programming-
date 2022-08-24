#include <stdio.h>
int main ()
{
    int X, Y, i, j, k;
    scanf("%d %d", &X, &Y);//3 10

    if (Y%X!=0)
    {
        i= ( Y / X ) + 1; // 3+1*3-10// 4
        j= (i*X)-Y;
        printf("%d\n", j);
    }
    return 0;
}
