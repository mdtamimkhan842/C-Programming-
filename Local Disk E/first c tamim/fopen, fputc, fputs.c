#include <stdio.h>
int main ()
{
FILE *fp;
fp= fopen("text_file. tax", 'a+');

int i;
for (i=65; i<90; i++){
fputc (i, fp);
}
char array[100]="Hi, i am a good";
fputs (array, fp);

fprintf (fp, "my id is: %d\n", 100);
fclose (fp);

return 0;
}
