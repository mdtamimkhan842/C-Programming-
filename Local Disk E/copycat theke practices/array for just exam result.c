#include <stdio.h>
int main ()
{
int st_m, ft_m, final_m;
double total_m;

st_m= 80;
ft_m= 56;
final_m = 70;

total_m= ft_m/4.0 + st_m/4.0+ final_m/2.0;  // 20, 14, 35

printf ("%0.01lf\n", total_m);




return 0;
}
