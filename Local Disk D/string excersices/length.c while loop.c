#include <stdio.h>
int main ()
{
    int i=0, counter=0;
    char name[50];

    scanf("%s", name);

    while(name[i]!='\0')
    {
              counter++;

    }
    printf("Length is: %d\n", counter);


    return 0;
}
