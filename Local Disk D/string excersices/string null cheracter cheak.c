#include <stdio.h>
int main ()
{
    char str[] = {'a', 'b', '1', '2'};

    int i =0;

    while(1)
    {
         printf("%d-%c\n", i, str[i]);
        if(str[i] =='\0')
            break;
        i++;


    }


    return 0;
}
