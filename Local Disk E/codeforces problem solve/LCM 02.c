#include <stdio.h>

void main()
{
    int i, n1, n2, max, lcm=1;

    scanf("%d %d", &n1, &n2);


    max = (n1>n2) ? n1 : n2;


    for(i=max;  ; i+=max)
    {

        if(i%n1==0 && i%n2==0)
        {
            lcm = i;
            break;
        }
    }

    printf("%d\n", lcm);

}
