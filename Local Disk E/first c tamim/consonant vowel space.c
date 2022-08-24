//count the consonant, vowel, space
#include <stdio.h>
int main ()
{
FILE *fp;
fp = fopen ("file_text: txt", "r");

int i;
int cCounter =0, vCounter = 0, sCounter =0;
while (1){
i = fgetc(fp);
if (i== EOF){
break;
}
if ( i==32|| i ==10){
cCounter++;
}else if (i='a', i = 'e', i= 'i', i='o', i='u'){
vCounter++;
}else if(i='A', i = 'E', i= 'I', i='O', i='U'){
vCounter++;
} else{
sCounter++;
}
}
printf (" consonant is: %d\n", cCounter);
printf ("vowel is: %d\n", vCounter);
printf ("Space and new line: %d\n", sCounter);

return 0;
}
