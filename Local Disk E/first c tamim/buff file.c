#include <stdio.h>
int main ()
{
FILE *fp;
fp = fopen ("Text_file: txt", 'r');

int c;
c = fgetc(fp);
printf ("%c\n", c);


char buff [100];
fscanf (fp, "%s", buff);
printf ("%s\n", buff);

fgets(buff, 500, fp);
printf ("%s\n", buff);

fgets(buff, 500, fp);
printf ("%s\n", buff);
fclose (fp);

return 0;
}
