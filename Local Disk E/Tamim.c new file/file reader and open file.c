#include <stdio.h>
int main ()
{
FILE *pt;
pt= fopen ("text_file.txt", "w");

int i;
for (i=65; i<90; i++){
fputc(i, pt);
}

char arr[100]= "Hi, i am good";
fputs(arr, pt);
fclose(pt);
return  0;
}
