#include <stdio.h>
int main ()
{
int j,i, n;
scanf ("%d", &n);
for (i=1; i<=n; i++){
for (j=1; j<=n; j++){
 if(i==1 || i==n || j==1 || j==n || i==j || j==(n - i + 1)){ // j= 5-2+1 = 5, 4. 3.2 1
 printf ("*");
}else{
printf (" ");
}
}
printf ("\n");
}
return 0;
}
*****
** **
* * *
** **
*****
