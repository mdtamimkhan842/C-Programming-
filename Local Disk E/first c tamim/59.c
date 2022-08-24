#include <stdio.h>
int main ()
{
    int a =5 ;


    printf ("value of a is : %d/n", a++);
    printf ("value of a is : %d\n", ++a);

    a=5;
    printf ("value of a is : %d\n", ++a);
    printf ("value of a is : %d\n", a++);

    return 0;
}
