#include <stdio.h>

void printf_divisior (int x){
int i;
for (i=1; i<=x; i++){
    if (x%i==0){
        printf ("%d\n", i);
    }

}

}

int main (){
printf_divisior (50000000);

return 0;
}
