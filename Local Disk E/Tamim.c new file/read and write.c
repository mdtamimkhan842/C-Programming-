#include <stdio.h>
#include <stdlib.h>
int main ()
{
FILE *pt;
pt= fopen ("tamim.txt", "w+");
int i, donation=0;
char name;
for (i=0; i<5; i++){
printf ("enter your name:\n ");
scanf ("%s", &name);

printf ("enter amount:\n");
scanf ("%d\n", &donation);

fprintf (pt, "%s, %d\n", name, donation);
}
char b[20];
int sum=0;
while (1){
    int code = fscanf (pt, "%s", b);
    if ( code == EOF){
            break;

    }
    printf ("%s", b);

     code = fscanf (pt, "%s", b);
    if ( code == EOF){
            break;

    }
    printf ("%s", b);
    sum = sum + atoi(b);

}
printf ("Total donation : %d\n", sum);
return 0;
}
