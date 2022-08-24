#include <stdio.h>
int main ()
{
char name[50];
printf("Enter name is: ");
scanf("%s", name);

int i=0, counter=0;

while(name[i]!='\0'){
counter++;
i++;
}
printf("length is: %d\n", counter);



return 0;
}
