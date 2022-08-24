#include <stdio.h>
void tamim_khan(int x){
int i;
for (i=0; i<=x; i++){
if (x%i==0){
printf ("%d\n", i);
}
}
}
int main ()
{
tamim_khan(20);

return 0;
}
