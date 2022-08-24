#include <stdio.h>
int main ()
{
char ch[50], name[60];

scanf("%c%c", &ch, &name);

if (ch == name){
    printf ("Are Brother");
}else{
printf ("No");
}
return 0;
}
