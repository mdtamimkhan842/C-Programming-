#include <stdio.h>
int main (){
int i, a,b,c;
printf ("enter the three values:");
scanf ("%d %d %d", &a, &b, &c);
int max, min;
max = a;
if (b>max) max =b;
if (c>max) max =c;
printf ("Maximum value is : %d\n", max);
min =a;
if (b<min) min =b;
if (c<min) min =c;
printf ("Minimum value is : %d\n", min);

if ( a % 2 == 0){
    printf ("result : even\n");
} else {
printf ("result : odd\n");
}
if ( b % 2 == 0){
    printf ("result : even\n");
} else {
printf ("result : odd\n");
}
if ( c % 2 == 0){
    printf ("result : even\n");
} else {
printf ("result : odd\n");
}

return 0;
}
