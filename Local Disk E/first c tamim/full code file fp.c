#include <stdio.h>
int main ()
{
FILE *fp;
fp = fopen ("Text_file: txt", 'a+');
int i;
for (i= 65; i<90; i++){
fputc (i, fp);
}

char arr[100] = "HI, i am good!";
fputs (arr, fp);

fprintf(fp, "my id is: %d\n", 100);

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

fclose(fp);
return 0;
}
