#include <stdio.h>

float add(float a, float b){
return a+b;
}
float subtract(float a, float b){
return a-b;
}
float divided(float a, float b){
return a/b;
}
float multiply(float a, float b){
return a*b;
}

int main ()
{
    float a,b;
    printf ("enter the values:\n");
    scanf ("%f%f", &a,&b);

    float odd_result = add(a, b);
    float subtract_result =  subtract(a, b);
    float divided_result = divided(a, b);
    float multiply_result = multiply(a, b);

    printf ("add: %f\n, subtract: %f\n, divided: %f\n, multiply: %f\n", odd_result, subtract_result, divided_result, multiply_result);
    return 0;
}
