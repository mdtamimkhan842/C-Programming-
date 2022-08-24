#include <stdio.h>
int main ()
{
FILE *fp;
fp = fopen ("Text_file: txt", 'W');

int i;
for (i= 65; i<90; i++){
fputc (i, fp);
}

char arr[100] = "HI, i am good!";
fputs (arr, fp);

fprintf(fp, "my id is: %d\n", 100);

fclose (fp);

return 0;
}
