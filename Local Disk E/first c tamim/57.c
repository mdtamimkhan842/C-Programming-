#include <stdio.h>
int main ()
{
int age;
printf ("enter the value of age: \n");
scanf ("%d", &age);

if (age < 2) {
printf ("infant\n");
} else if ( age < 10) {
printf ("child\n");
} else if ( age <20){
printf ("teenage\n");
}else if (age < 30){
printf ("adult\n");
} else if (age >= 30) {
printf ("old\n");
}else{
printf ("do not age in the box \n");
}
return 0;

}
