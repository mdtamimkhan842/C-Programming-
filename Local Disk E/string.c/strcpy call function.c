#include <stdio.h>
#include <string.h>
int main ()
{

    char a[]= "Bangladesh";
    char b[]= "Dhaka";

    strcpy(a,b);
    printf ("a is : %s\n", a);
    printf ("b is: %s\n", b);

    return 0;
}
