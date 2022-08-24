#include <stdio.h>
int main ()
{
char street [] = {'a', 'b', 'c'};

int i = 0;
while (1){

printf("%d-%c\n", i, street [i]);

if (street [i] =='\0'){
break;

}

i++;
}

return 0;


}
