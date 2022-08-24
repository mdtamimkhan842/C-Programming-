#include <stdio.h>
#include <string.h>
int main ()
{
char S[99];
int i;
scanf("%c", S);

i=strrev(S);
if (S==i)
    printf("Yes");
else
    printf("No");


return 0;
}
