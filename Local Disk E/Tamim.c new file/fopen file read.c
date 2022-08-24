#include <stdio.h>
int main ()
{
FILE *pt;
pt= fopen ("nayan.txt", "r");
int c;
while (1){
c= fgetc (pt);
if (c== EOF){
        break;
}else{
printf ("%c\n", c);
}
}
return 0;
}
