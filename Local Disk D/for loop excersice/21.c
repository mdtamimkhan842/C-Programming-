#include <stdio.h>
int main ()
{
int i, j;
for (i=65; i<=69; i++){ //69, 68
for (j=69; j>=i; j--){ //65,68 69,
    printf ("%c", j);
}
printf ("\n");
}

return 0;
}
