#include <stdio.h>
int main ()
{
    char str[]= {'a', 'b', 'c'};
    int i;
    i=0;
    while (1)
    {
        printf ("%d-%s\n", i, str[i]);
        if (str[i]=='\0')
        {
            break;
        }
        i++;
    }
    return 0;
}
