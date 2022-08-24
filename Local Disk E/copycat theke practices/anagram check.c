#include <stdio.h>
#include <string.h>
#include <conio.h>

int main ()
{

    char A[100], B[100];
    scanf( "%s %s", A, B);
    int len1, len2, len, i, j, n=0, found=0, notfound=0;

    len1= strlen(A);// tamim //5
    len2= strlen(B);

    if (len1==len2)
        len=len1;
    for(i=0; i<len; i++)//0
    {
        found=0;
        for (j=0; j<len; j++)
        {
            if(A[i]==B[j])
                found=1;
                break;
    }
    if (found=0)
        notfound=1;
    break;
    }
    if(notfound==1)
        printf("No");
    else
        printf("Yes");

          return 0;
}

