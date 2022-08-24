#include <stdio.h>
int main ()
{
char name[20];
printf ("Enter your name:");
scanf ("%s", name);

int i=0, counter =0;
while (name[i]!= '\0'){
counter++;
i++;
}
printf ("enter your lanth: %d\n", counter);

return 0;
}

