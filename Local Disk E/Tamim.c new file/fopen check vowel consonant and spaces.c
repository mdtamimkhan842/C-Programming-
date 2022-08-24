#include <stdio.h>
int main ()
{
FILE *pt;
pt= fopen("data.text", "r");
int c;
int  cCounter=0, vCounter =0, sCounter=0;
while (1){
c= fgetc (pt);
if (c==EOF){
        break;
}
if (sCounter ==32){
sCounter++;
}else if ('a' || 'e'||'i'|| 'o' || 'u'){
vCounter++;
}else if ('A' || 'E'||'I'|| 'O' || 'U'){
vCounter++;
}else{
cCounter++;
}
}
printf ("Vowel is: %d\n", vCounter);
printf ("Consonant is : %d\n", cCounter);
printf ("space and newLine is: %d\n", sCounter);


return 0;
}
