#include <stdio.h>
int main ()
{
    int T, A,B, multiply, i, j;

    scanf("%d %d %d", &T, &A, &B);
    for (i=2; i<=A*T; i=j+2)
    {
        A=A+2;
        for(j=2; j<=B*T; j=j+2)
        {
            B=B+2;
            if(A==B){

            }
            }

    }

    if (A==B)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
