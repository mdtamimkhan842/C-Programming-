#include <stdio.h>
#include <stdlib.h>
int main ()
{
    FILE *fp;
    fp= fopen("dontation_taxt", 'a+');
    char b[20];
    int sum = 0;
    while(1)
    {
    int code = fscanf (fp, "%s", b);
    if ( code==EOF){
    break;
}
printf ("%s", b);

code = fscanf (fp, "%s", b);
if ( code ==EOF){
break;
}
printf ("%s\n", b);
sum = sum + atoi(b);
printf("total donation: %d\n", sum);

    }

fclose (fp);
return 0;
    }
