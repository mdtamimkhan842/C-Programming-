#include <stdio.h>
int main ()
{
int i, j;
char str[50];
printf ("Enter string:");
scanf("%s", &str[i]);
getc(str);
for (i=0; str[i]!='\0'; i++){
        if (str[i]>=65 && str[i]<=90)
        str[i]= str[i]+32;
else if (str[i]>=97 && str[i]<=122)
    str[i]= str[i]-32;

}
printf ("Result: %s\n", str);
return 0;
}
