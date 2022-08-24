#include <stdio.h>
int main ()
{
int i, j, cube, n;
float ave;

scanf ("%d", &n);

for (i=1; i<=n; i++){
    for (j=1; j<=i; j++){
        cube= i*i*i;

}

printf ("Cube is: %d\n", cube);
}
return 0;
}
