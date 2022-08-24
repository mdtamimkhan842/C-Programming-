#include <stdio.h>
int main ()
{
char ch;
printf ("enter the value: ");
scanf ("%c", &ch);

if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
printf ("result: vowel\n");
}else {
printf ("result: consonant\n");
}
return 0;
}


