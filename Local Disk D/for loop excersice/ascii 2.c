#include <stdio.h>
int main ()
{
int i, j;
for (i=65; i<=70; i++){
for (j=70; j>=i; j--){
printf ("%c",j);
}
printf("\n");
}


return 0;
}
