#include <stdio.h>
void tamim_khan(int x){
int i;
for (i=1; i<=x; i++){
if (x%i==0){
printf ("%d\n", i);
}
}
}
int main ()
{
tamim_khan(42);

return 0;
}
