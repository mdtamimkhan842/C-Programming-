#include <stdio.h>
int main ()
{
    int i, n, sum =0;
    printf ("Enter a value: ");
    scanf ("%d", &n);

    for (i=1; i<n; i++) //6
    {

        if (n%i==0)
        {
//1,2.3
            sum = sum+i;
        }
    }
    if (n==sum)
        printf ("n is perfect value");
    else
        printf ("n is not perfect value");
    return 0;
}

scanf ("n")
for (i=1; i<n; i++){
if (n%i==0){
    sum = sum+i;
}
}
if (n==sum)
    n is perfect number
