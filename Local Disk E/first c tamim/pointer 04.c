#include <stdio.h>
int main ()
{
int x,y,z;
x=255;
y=30;
z=80;

int *p1, *p2, *p3;
p1= &x;
p2=&y;
p3= &z;

if (*p1>*p2 && *p1>*p2){
printf("the largest value is: %d\n", *p1);
} else if (*p2>*p1 && *p2>*p3){
printf("the largest value is: %d\n", *p2);
} else{
printf ("the largest value is : %d\n", *p3);
}

return 0;
}
