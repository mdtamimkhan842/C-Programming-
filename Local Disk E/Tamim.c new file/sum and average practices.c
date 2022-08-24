#include <stdio.h>
int main ()
{
int i,average, sum = 0;
for (i=1; i<=10; i++){
printf ("%d", i);
printf (" ");
sum = sum + i;

}
printf ("\n");
printf ("%d", sum);
average = sum/10;
printf ("%d", average);

return 0;
}

//for (i=1; i<10;i++){
  //  sum = sum+i;
//}
//printf ("%d\n", sum);
//average = sum /10;
//printf ("%d\n", average);
