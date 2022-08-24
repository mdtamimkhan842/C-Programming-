#include <stdio.h>
int main ()
{
char name[]= {'a','b','c','d'};
int i=0;
while (1){
printf ("%d-%c\n", i, name[i]);
if (name[i]=='\0'){
        break;
}
i++;
}

return 0;
}
