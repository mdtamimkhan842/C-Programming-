#include <stdio.h>
int main ()
{
int H, M;
scanf("%d %d", &H, &M);// 10 15
double x, y;

x= M/(double)5; //3,

if(x>H)
{

y= (((x-H)*30)-(M/(double)2));
printf("%0.7lf\n", y);
}
if(x<H)
{

y= (((x+12-H)*30)-(M/(double)2));//3+12-10*30-15/2//5*30-7.5
printf("%0.7lf\n", y);
}
return 0;
}
