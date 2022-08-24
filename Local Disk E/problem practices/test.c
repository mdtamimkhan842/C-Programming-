#include <stdio.h>
#include <string.h>
int main ()
{
int i, N;
scanf ("%d", &N);
for (i=0; i<N; i++){
char input [51];
int Right_shift;

scanf ("%s", &input);
scanf ("%d", &Right_shift);

int j, lenght = strlen(input);
for (j=0; j<lenght; j++){
char c = input[j]+ Right_shift;
if (c<65){
    c= c+26;
}
printf ("%c",c);
}
}
printf ("\n");
return 0;
}
