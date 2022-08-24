#include <stdio.h>
int main ()
{
FILE *fp;
fp = fopen ("file_text: txt", "r");

int i;
while (1){
i = fgetc(fp);
if (i== EOF){
break;
}

printf ("%d\n", i);
}

return 0;
}
