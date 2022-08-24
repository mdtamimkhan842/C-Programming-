#include <stdio.h>
int main ()
{
int a[5], b[5], ab[5];
int i;
printf ("enter array a is:");
for (i=0; i<5; i++){
scanf ("%d", &a[i]);
}
printf ("enter array b is:");
for (i=0; i<5; i++){
scanf ("%d", &b[i]);
}
for (i=0; i<5; i++){
ab[i]=a[i]+b[i];
}
printf ("enter array ab is:");
    for (i=0; i<5; i++){
        printf ("%d\n", ab[i]);
    }
return 0;
}
