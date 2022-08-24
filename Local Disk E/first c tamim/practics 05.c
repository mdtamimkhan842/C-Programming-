#include <stdio.h>
int main ()
{
int height, weight, perimeter, area;
height= 7;
weight = 5 ;
perimeter = 2* (height+ weight);

printf ("Perimeter of the rectang= %d inch\n", perimeter);
area = height * weight;
printf ("Area of the rectangle=%d square inch\n", area);

return 0;
}
