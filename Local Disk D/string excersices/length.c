#include <stdio.h>
int main ()
{
    int i, counter=0;
    char text[50];

    scanf("%c", text);

    for (i=1; text[i]!='\n'; i++)
    {
        counter++;
    }
            printf("Length is : '%c' =%d\n", text,counter);




    return 0;
}
